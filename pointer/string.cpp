#include <iostream>
using namespace std;

int main(){
    string a="Devanshu";
    cout<<a<<endl;
    char *p=&a[0];
    cout<<*(p+1)<<endl;
}