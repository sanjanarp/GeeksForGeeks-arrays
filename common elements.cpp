class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            vector<int> v;
             int i=0,j=0,k=0,temp=0;
             while(i<n1&&j<n2&&k<n3){
                 if(A[i]==B[j]&& B[j]==C[k]){ //checks if the element is a common element
                  if(temp==0){ //checks if it is the first element that is to be 
                               //stored in vector v
                      v.push_back(A[i]);
                      temp++;
                  }
                else{ //if it is not the first element ,
                       //then it checks if previous element stored in v is 
                        //same as current element; i,e. it checks for redundency
                    if(v[temp-1]!=A[i]){ //if the element is not redundant ,it gets stored in v
                        v.push_back(A[i]);
                        temp++;
                    }
                }
                i++;j++;k++;
             }
                  //if element is not common, 
                  //it compares current elements of arrays A&B and B&C ,
                  //checks for smaller element and increments the required pointer 
                  //This is done because array lengths are not same
             else if(A[i]<B[j]) i++; 
             else if(B[j]<C[k]) j++;
             else k++;
             
        }
        return v;
    }

};
