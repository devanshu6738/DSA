// Split an array into two equal Sum subarrays
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int prefix=0;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        for(int i=0;i<arr.size()-1;i++){
            prefix+=arr[i];
            int ans=sum-prefix;
            if(prefix==ans) return 1;
        }
        return 0;
        
    }
};

