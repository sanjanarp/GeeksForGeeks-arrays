#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int a[], int n){
   
       int maxsum=0,cursum=0,flag=0;
       for(int i=0;i<n;i++){
           if(a[i]<0)
           flag++;
       }
       if(flag == n){
           sort(a,a+n);
           return a[n-1];
       }
       for(int i=0;i<n;i++){
           cursum=cursum +a[i];
           if(cursum>maxsum){
               maxsum=cursum;
           }
           if(cursum<0){
               cursum=0;
           }
       }
       
       return maxsum;
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
