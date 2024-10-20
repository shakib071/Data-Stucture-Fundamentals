#include<bits/stdc++.h>
using namespace std;
//1st in 1st out

#define n 20

class Queue{
   
    public:
    int* arr;
    int front;
    int back;
   

    Queue(){
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void Push(int x){
        if(back==n-1){
            cout<<"Queue OverFlow"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front++;
        }

    }

    void Pop(){
       
       if(front==-1 or front>back){
        cout<<"Queue UnderFlow"<<endl;
        return;
       }
       front++;
    }

    
    int Peek(){
         if(front==-1 or front>back){
        
        return -1;
       }

       return  arr[front];

    }

    bool Empty(){
        if(front==-1 or front>back){
          return true;
       }

       return false;
    }

};

int main(){
     
     Queue q;
     q.Push(1);
     q.Push(2);

     cout<<q.Peek()<<endl;
      q.Pop();
      cout<<q.Peek()<<endl;
      q.Pop();
      cout<<q.Empty()<<endl;
     
    return 0;

}