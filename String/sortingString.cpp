#include<iostream>
#include <utility>
using namespace std;

string sorting(string str){
    int n=str.size();
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(str[j]-'a'>str[j+1]-'a'){
                swap(str[j],str[j+1]);
            }
        }
    }
    return str;
}

int main(){
    string nm="Devanshu Gupta";
    string ans=sorting(nm);
    cout<<ans;
}