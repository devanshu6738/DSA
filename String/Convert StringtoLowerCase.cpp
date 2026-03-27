class Solution {
  public:
    string toLower(string& s) {
        for(int i=0;i<s.size();i++){
            if(s[i]<'a'){
                int num=s[i]-'A';
                s[i]='a'+num;
            }
        }
        return s;
        
    }
};