class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
       int temp=0;
       unordered_map<int,int>m;
      
       for(int i=0;i<n;i++){
           if(m.find(k-arr[i])!=m.end()) 
           {
               temp +=m[k-arr[i]];
           }
           m[arr[i]]++;
       }
       
       return temp;
    }
};

/* Explanation:
         Consider a test case:
            Input:
             N = 4, K = 6
             arr[] = {1, 5, 7, 1}
            Output: 2
            Explanation: 
                arr[0] + arr[1] = 1 + 5 = 6 
                and arr[1] + arr[3] = 5 + 1 = 6.
    
    
    for(int i=0;i<n;i++)
     
     step-1:
          when i=0
          arr[0] = 1
         
          if(m.find(k-arr[i])!=m.end()) 
          =>  if(m.find(6-1)!=m.end())  
              if(m.find(5)!=m.end()) 
              //this condition fails 
              // as map m is currently empty,
              //so m.find(5)==m.end()
              
         m[arr[i]]++  
         => m[1]++
         
         if we write map elements as (key, element),
            our map currently looks like m= {(1,1)}
            
      step-2:
          when i=1
          arr[1] = 5
         
          if(m.find(k-arr[i])!=m.end()) 
          =>  if(m.find(6-5)!=m.end())  
              if(m.find(1)!=m.end()) 
              //this condition is true 
              // as map m has element 1 already,
            
          initially temp=0,
              temp = temp+ m[k-arr[i]];
                  = 0 + m[1];  //frequency of element 1 in m is 1, so m[1] =1
                  => temp=1
              
         m[arr[i]]++  
         => m[5]++
         
         if we write map elements as (key, element),
            our map currently looks like m= {(1,1), (1,5)}
            
            
    step-3:
          when i=2
          arr[2] = 7
         
          if(m.find(k-arr[i])!=m.end()) 
          =>  if(m.find(6-7)!=m.end())  
              if(m.find(-1)!=m.end()) 
              //this condition fails 
              
         m[arr[i]]++  
         => m[7]++
         
         if we write map elements as (key, element),
            our map currently looks like m= {(1,1),(1,5),(1,7)}
            
            
            
     step-4:
          when i=3
          arr[3] = 1
         
          if(m.find(k-arr[i])!=m.end()) 
          =>  if(m.find(6-1)!=m.end())  
              if(m.find(5)!=m.end()) 
              //this condition is true 
              // as map m has element 5 already,
            
           temp=1
              temp= temp+ m[k-arr[i]];
                  = 1 + m[5];  //frequency of element 5 in m is 1, so m[5] =1
                  => temp=2
                  
         m[arr[i]]++  
         => m[1]++
         
         if we write map elements as (key, element),
            our map currently looks like m= {(2,1), (1,5), (1,7)}
            
            
End of for loop
return temp
 
 temp =2 is the final required answer
 
            
Map STL functions used here:
       
  1) m.end():
      It returns an iterator which points to the past-the-end element in the map. 
      The past-the-end element is the theoretical element that would follow the last element in the map. 
    
  2) m.find():
      It returns an iterator or a constant iterator that refers to the position where the key is present in the map.
      If the key is not present in the map container, it returns an iterator or a constant iterator which refers to map.end(). 
*/
