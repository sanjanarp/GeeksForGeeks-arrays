//method1: using iteration
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // a : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int a[], int l, int r, int k) {
           int min;
           while(k--){
               min =a[0];
           for(int i=1;i<=r;i++){
               if(a[i]<min)
               min=a[i];
           }
        for(int i=0;i<=r;i++){
            if(a[i]==min){
                a[i]=a[r];
               a[r]=min;
            }
        } 
        r--;
    }
 return min;
    }
};


int main(){
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       cin>>a[i];
       int k;
       cin>>k;
       Solution ob;
       cout<<ob.kthSmallest(a,0,n-1,k)<<endl;
   }
   return 0;
}

//time complexity is greater than O(n) ; requires to be optimized






//method 2: using sort stl
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        sort(arr,arr+l+r+1);
        return arr[k-1];
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends

//time complexity: O(nlogn) ; can be further optimized





//method 3: priority queue

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
           priority_queue <int> pq;
           for(int i=0;i<=r;i++){
               pq.push(arr[i]);
               if(pq.size()>k)
               pq.pop();
               
           }
           return pq.top();
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends

//time complexity: O(nlogk)
