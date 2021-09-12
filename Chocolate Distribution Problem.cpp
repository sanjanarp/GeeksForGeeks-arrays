class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
     sort(a.begin(), a.end());
     long long ans = INT_MAX;
     for(int i=0;i+m-1<n;i++){
         ans = min(a[m+i-1] - a[i] , ans);
     }
    return ans;
    }   
};

/* The basic idea is to first sort the given array and then subtract first & mth element, then find minimum of the subtracted value with the previous value of ans. This is repeated for n-m times because we need only m elements */
