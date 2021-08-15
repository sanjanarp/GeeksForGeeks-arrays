//Another method for Reverse a string problem

//Initial Template for C++
// Driver code begins

#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
   for(int i=str.length()-1;i>=0;i--)
   {
       cout<<str[i];
   }
}