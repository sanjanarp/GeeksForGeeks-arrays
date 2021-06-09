class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    { 
        int sum=0;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0 || m[sum]==1)
            return true;
            else
            m[sum]=1;
        }
           return false;
    }
};
