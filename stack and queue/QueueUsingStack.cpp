#include<bits/stdc++.h>
using namespace std;

class Queue{
   
   stack<int>s1;
   stack<int>s2;

   public:

   void Push(int x){
     s1.push(x);
   }

   int Pop(){
    if(s1.empty() and s2.empty()){
        //Queue is empty
        return -1;
     }

     if(s2.empty()){
        while(!s1.top()){
            s2.push(s1.top());
            s1.pop();
        }
     }

     int topval=s2.top();
     s2.pop();
     return topval;
     //wtf  keno
   }

   bool Empty(){
    if(s1.empty() and s2.empty()){
        return true;
    }
    return false;
   }

};

int main(){
     
   Queue q;
   q.Push(1);
   q.Push(2);
   q.Push(3);
   q.Push(4);
   cout<<q.Pop()<<endl;



     
    return 0;

}