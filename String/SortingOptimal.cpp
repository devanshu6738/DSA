#include<iostream>
#include<vector>
using namespace std;

void Sorting(string str){
    vector<char>arr(26,0);
    int n=str.size();
    for(int i=0;i<n;i++){
        arr[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        while(arr[i]>0){
            cout<<char('a'+i);
            arr[i]--;
        }
    }
}

int main(){
    string str="devanshugupta";
    Sorting(str);
}