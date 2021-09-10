#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution  
{ 
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long CurrSum=0,maxSum=INT_MIN;
        for(int i=0;i<n;i++)
        {
            CurrSum+=arr[i];
            if(CurrSum<0)
            {
            CurrSum=0;
            }
            maxSum=max(maxSum,CurrSum);
        }
        if(maxSum==0)  // If all the elements are negative , maxSum stores the maximum value
        {
            sort(arr,arr+n);
            maxSum=arr[n-1];
        } 
        return maxSum;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
