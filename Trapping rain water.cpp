class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int sum=0, l=arr[0], r = arr[n-1],lp=0,rp=n-1;
        while(lp<rp){
            l = (arr[lp]>l) ? arr[lp] : l ;
            r = (arr[rp]>r) ? arr[rp] : r;
            sum += (l > r) ? (r-arr[rp--] ): (l-arr[lp++]);
        }
    return sum;
        
    }
};
