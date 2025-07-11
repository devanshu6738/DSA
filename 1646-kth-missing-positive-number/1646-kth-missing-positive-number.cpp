class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int sum=0;
        if(arr[0]>1){
            sum=arr[0]-1;
        }
        if(sum>=k){
            return k;
        }
        int start,end;
        for(int i=1;i<arr.size();i++){
            start=arr[i-1],end=arr[i];
           int gap=end-start-1;
           if(gap+sum>=k){
            return start+(k-sum);
           }
           sum+=gap;
        }
        if(k>sum){
            if(sum==0){
                sum=arr[arr.size()-1]+k;
            }else{
                sum=arr[arr.size()-1]+k-sum;
            }
        }
        return sum;
    }
};