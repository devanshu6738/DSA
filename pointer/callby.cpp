#include <iostream>
using namespace std;

int CallByValue(int a,int b){
    a=a*20;
    b=b*20;
}

int CallByReference(int *a,int *b){
    *a=*a*10;
    *b=*b*10;
}
int main(){
    int a=34;
    int b=67;
    CallByValue(a,b);
    cout<<a<<" "<<b<<endl;
    CallByReference(&a,&b);
    cout<<a<<" "<<b;
}