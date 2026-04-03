// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        int count=0;
        int minm=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i].size()<minm){
                minm=arr[i].size();
            }
        }
        for(int i=0;i<minm;i++){
            for(int j=1;j<arr.size();j++){
                if(arr[0][i]!=arr[j][i]){
                    if(count){
                        return arr[0].substr(0,count);
                    }else{
                        return "";
                    }
                }
                
            }
            count++;
        }
        if(count){
            return arr[0].substr(0,count);
        }else{
            return "";
        }
    }
};
