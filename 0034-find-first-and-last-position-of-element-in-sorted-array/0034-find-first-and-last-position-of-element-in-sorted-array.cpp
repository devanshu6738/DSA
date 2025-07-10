class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int first=-1;
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        start=0,end=nums.size()-1;
        int second=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                second=mid;
                start=mid+1;
            }else if(nums[mid]>target){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }
        ans.push_back(first);
        ans.push_back(second);
        return ans;
    }
};