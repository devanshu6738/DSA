class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int max_water=0;
        while(i<j){
            if(height[i]<height[j]){
                int water=min(height[i],height[j])*(j-i);
                if(water>max_water) max_water=water;
                i++;
            }else if(height[i]>height[j]){
                 int water=min(height[i],height[j])*(j-i);
                if(water>max_water) max_water=water;
                j--;
            }else{
                 int water=min(height[i],height[j])*(j-i);
                if(water>max_water) max_water=water;
                i++;
                j--;
            }
        }
        return max_water;
    }
};