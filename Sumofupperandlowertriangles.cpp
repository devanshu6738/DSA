class Solution {
  public:
    vector<int> sumTriangles(vector<vector<int>>& mat) {
        int upper=0,lower=0;
        vector<int>ans;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(j>=i){
                   upper+=mat[i][j];
                }
                if(i>=j){
                    lower+=mat[i][j];
                }
            }
        }
        ans.push_back(upper);
        ans.push_back(lower);
        return ans;
        
    }
};
