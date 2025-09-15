#include <iostream>
using namespace std;
class Queue{
   private:
      int *arr;
      int front,rear;
      int size;
    public:
    Queue(int c){
        arr=new int[c];
        front=-1;
        rear=-1;
        size=c;
    }
   void enqueue(int x){
       if((rear+1)%size==front){
           cout<<"Overflow Condition";
           return;
       }
       if(rear==-1){
           rear=0;
           front=0;
       }else{
           rear=(rear+1)%size;
       }
       arr[rear]=x;
   }
 int dequeue(){
     if(front==-1){
         cout<<"Underflow";
         return -1;
     }
     int y =arr[front];
     if(front==rear){
         front=-1;
         rear=-1;
     }else{
         front=(front+1)%size;
     }
     return y;
 }
bool isfull(){
    if(rear==front){
        return 1;
    }else{
        return 0;
    }
}
bool isEmpty(){
    if(rear==-1){
        return 1;
    }else{
        return 0;
    }
}
};
int main() {
    Queue q1(5);
    q1.enqueue(56);
    q1.enqueue(78);
    q1.enqueue(9);
    q1.enqueue(2);
    q1.enqueue(5);
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.dequeue()<<endl;
    cout<<q1.isfull();
}
