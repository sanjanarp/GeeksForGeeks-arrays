//method 1: sort stl
class Solution
{
    public:
    void sort012(int a[], int n)
    {
      sort(a,a+n);
    }
    
};

//method 2: without sort
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int c=0,d=0,e=0;
         for(int i=0;i<n;i++){
             if(a[i]==0)
             c++;
             if(a[i]==1)
             d++;
             if(a[i]==2)
             e++;
         }
          int i=0;
         while(c>0){
            a[i] =0;
            c--;
            i++;
         }
         while(d>0){
            a[i] =1;
            d--;
            i++;
         }
         while(e>0){
            a[i] =2;
            e--;
            i++;
         }
    }
    
};
