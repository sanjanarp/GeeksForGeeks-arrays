#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
 /*   int j=0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            if(i!=j){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            j++;
        }
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";*/
    
    for(int i=0;i<n;i++){
        if(a[i]<0)
        cout<<a[i]<<" ";
    }
     for(int i=0;i<n;i++){
        if(a[i]>=0)
        cout<<a[i]<<" ";
    }
    
    return 0;
}
