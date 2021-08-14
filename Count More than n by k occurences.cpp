class Solution
{
    public :
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        int r = n/k;
        int freq =1;
        int v =0;
        sort(arr, arr+n);
        for(int i=0;i<n;i++){
            if(arr[i]== arr[i+1]){
                   freq++;
                  }  else freq =1;
           if(freq > r && (arr[i+1]!= arr[i+2]) ){
                    v++;
                    freq=1;
                  }              
        }                      
    return v;
    }
};
