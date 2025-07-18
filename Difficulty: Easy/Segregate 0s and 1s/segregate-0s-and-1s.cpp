// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int zero=0;
        int first=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                zero++;
            }else{
                first++;
            }
        }
        for(int i=0;i<arr.size();i++){
            if(zero){
                arr[i]=0;
                zero--;
            }else{
                arr[i]=1;
                first--;
            }
        }
    }
};