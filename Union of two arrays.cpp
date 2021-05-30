class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        
        int i=0,sum=0,j;
        int k,flag=0, arr[m+n];
        
       for(i=0;i<n;i++){
            arr[i]= a[i];
        }
        for(j=i,k=0;k<m;j++,k++){
            arr[j]=b[k];
        }
        sort(arr,arr+m+n);
        
        for(i=0;i<m+n;i++){
            if(arr[i]!=arr[i+1])
            sum++;
        } 
       return sum; 
    }
};
