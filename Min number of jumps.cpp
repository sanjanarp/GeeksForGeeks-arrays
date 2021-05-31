//method 1: ladder solution

class Solution{
  public:
    int minJumps(int a[], int n){
        int jumps = 0, currend =0, currfar=0;
       for(int i=0;i<n;i++){
            currfar = max(currfar, i+ a[i]);
            if(i==currend){
                jumps++;
                currend=currfar;
            }
            if(currend >=n-1)
            break;
       }
       if(currend<n-1) return -1;
       return jumps;
    }
};

//method 2: using greedy algorithm

int minJumps(int arr[], int n){
    int jumps = 0, farthest = 0, currEnd = 0;
    for(int i=0;i<n-1;i++)
    {
        farthest = max(farthest, i+ arr[i]);
         if(i == currEnd)
        {
            jumps++;
            currEnd = farthest;
        }
        if(farthest >= n-1)
            return 1 + jumps;
        
        if(i == farthest)
            return -1;
       
    }
    return jumps;
}
