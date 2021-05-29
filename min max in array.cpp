//method 1 (without using structures)
#include <iostream>
using namespace std;
int
main ()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
    
 int min , max;
 
 if(n==1){
     min = a[0];
     max = a[0];
 }
 else if(n>1){
 if (a[0] > a[1])
    {
     min = a[1]; max = a[0];
    }
  else
    {
     max = a[1]; min = a[0];
    }

  for (int i = 2; i < n; i++)
    {
      if (a[i] > max)
          max = a[i];
      if (a[i] < min)
         min = a[i];
    }
 }
  cout << "Min is " << min << endl;
  cout << "Max is " << max << endl;
 return 0;
} 



//method 2 (using sort STL)
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    cout<<"Min is "<<a[0]<<endl;
    cout<<"Max is "<<a[n-1]<<endl;
    return 0;
}



//method 3 (using struct)
#include <iostream>
using namespace std;

 struct Pair
{
  int min;
  int max;
};

struct Pair getminmax (int a[], int n)
{
  struct Pair minmax;
  int i;

  if (n == 1)
    {
      minmax.min = minmax.max = a[0];
    }

  if (a[0] > a[1])
    {
      minmax.min = a[1];
      minmax.max = a[0];
    }
  else
    {
      minmax.max = a[1];
      minmax.min = a[0];
    }

  for (i = 2; i < n; i++)
    {
      if (a[i] > minmax.max)
	minmax.max = a[i];
      if (a[i] < minmax.min)
	minmax.min = a[i];

    }
  return minmax;
}

int main ()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    cin >> a[i];
  struct Pair minmax = getminmax (a, n);
  cout << "Min is " << minmax.min << endl;
  cout << "Max is " << minmax.max << endl;
   return 0;
} 

