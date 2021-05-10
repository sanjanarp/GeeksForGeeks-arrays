//Initial Template for C++


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

// Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    string s;
    int j=str.length()-1;
   for(int i=0;i<str.length();i++){
           s[j]=str[i];
           j--;
       
   }
   for(int j=0;j<str.length();j++)
   cout<<s[j];
   
}
