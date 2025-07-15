class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
         long long low = 1;
        long long high = *max_element(piles.begin(), piles.end());
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long totalHours = 0;

            for (int i = 0; i < piles.size(); i++) {
                totalHours += (piles[i] + mid - 1LL) / mid; 
            }

            if (totalHours <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return (int)ans;
  
        
    }
};