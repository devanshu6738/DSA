class Solution {
public:
    int memFib(vector<int>&arr,int n){
        if(arr[n]==-1){
            if(n<=1) return n;
             arr[n]=memFib(arr,n-1)+memFib(arr,n-2);
        }
        return arr[n];
    }
    int fib(int n) {
        vector<int>arr(n+1,-1);
        return memFib(arr,n);
    }
};