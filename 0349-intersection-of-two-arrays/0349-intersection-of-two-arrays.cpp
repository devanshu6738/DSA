class Solution {
public:
    vector<int> intersection(vector<int>& num1, vector<int>& num2) {
        vector<int>ans;
        int temp=-1;
        sort(num1.begin(),num1.end());
        sort(num2.begin(),num2.end());
        int i=0,j=0;
        while(i<num1.size() && j<num2.size()){
            if(num1[i]==num2[j]){
               if(temp!=num1[i]&&temp!=num2[j]){
                temp=num1[i];
                ans.push_back(temp);
               }
               i++;
               j++;
            }else if(num1[i]>num2[j]){
                j++;
            }else{
                i++;
            }
        }
        return ans;

    }
};