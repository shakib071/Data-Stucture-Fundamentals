#include<bits/stdc++.h>
using namespace std;
//1st in 1st out

//insertion at tail(enqueue (push))
//delete at head  (dequeue(pop))
//peek(head er value )
//empty(head null kina)
//ei 4 ta kaj 

class node{

    public:

    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

class Queue{
    node* front;
    node* back;

    public:
    
    Queue(){
        front=NULL;
        back=NULL;
    }

    void Push(int x){
         node* n=new node(x);
        if(front==NULL){
            back=n;
            front=n;
            return;
        }
     
      back->next=n;
      back=back->next;
    }

    void Pop(){
      if(front==NULL){
        cout<<"Queue UnderFlow"<<endl;
        return;
      }
      node* todelete=front;
      front=front->next;
      delete todelete;
    }

    int Peek(){
        if(front==NULL){
        cout<<"Queue UnderFlow"<<endl;
        return -1;
      }

      return front->data;
    }

    bool Empty(){
      if(front==NULL){
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