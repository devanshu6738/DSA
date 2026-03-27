// User function template for C++
class Solution {
  public:
    string findSum(string &s1, string &s2) {
        // Your code goes here
        int s1Size=s1.size()-1;
        int s2Size=s2.size()-1;
        int carry=0,rem,num;
        string str="";
        char c;
        while(s1Size>=0&&s2Size>=0){
            num=s1[s1Size]-'0'+s2[s2Size]-'0'+carry;
            rem=num%10;
            carry=num/10;
            c=rem+'0';
            str+=c;
            s1Size--;
            s2Size--;
        }
        while(s1Size>=0){
            num=s1[s1Size]-'0'+carry;
            rem=num%10;
            carry=num/10;
            c=rem+'0';
            str+=c;
            s1Size--;
        }
        while(s2Size>=0){
            num=s2[s2Size]-'0'+carry;
            rem=num%10;
            carry=num/10;
            c=rem+'0';
            str+=c;
            s2Size--;
        }
        if(carry)
        str+=(carry+'0');
        
        int start=0,end=str.size()-1;
        while(start<end){
            int temp=str[end]-'0';
            str[end]=str[start];
            str[start]='0'+temp;
            start++;
            end--;
        }
        int i=0;
        while(i<str.size()-1&&str[i]=='0'){
        i++;
        }
       str=str.substr(i);
       return str;
    }
};
