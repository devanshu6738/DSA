#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string s="devanshu";
    string d="gupta";
    string sd=s+d;
    cout<<sd<<endl;
    string nm=sd;
    sort(nm.begin(),nm.end());
    cout<<nm<<endl;
    nm=sd;
    reverse(nm.begin(),nm.end());
    cout<<nm<<endl;
    cout<<nm.size()<<endl;
}  