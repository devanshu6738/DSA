class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int high=0;
        int low=INT_MIN;
        for(int i=0;i<weights.size();i++){
            if(weights[i]>low){
                low=weights[i];
            }
            high+=weights[i];
        }
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            int day=1;
            int sum=0;
            for(int i=0;i<weights.size();i++){
                if(sum+weights[i]<=mid){
                    sum+=weights[i];
                }else{
                    day++;
                    sum=weights[i];
                }
            }
            if(day<=days){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};