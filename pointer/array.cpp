#include <iostream>
using namespace std;

int main(){
   int arr[5]={1,2,3,4,5};
   cout<<arr<<endl;
   cout<<*(arr)<<endl;
   int *p=arr;
   cout<<p<<endl;
   cout<<&p<<endl;
   cout<<*p<<endl;
   cout<<*p+1<<endl;

   int arr2d[2][2]={{1,2},{3,4}};
   cout<<arr2d[0][1]<<endl;
   cout<<**arr2d<<endl;
   cout<<*arr2d<<endl;
   int *ptr=*arr2d;
   cout<<*ptr;
   
}