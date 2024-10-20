#include<bits/stdc++.h>
using namespace std;

#define n 100

class Stack{
      public:
    int * arr;
    int top;

  

    Stack(){
        arr= new int[n];
        top=-1;
    }

    void Push(int x){
        if(top==n-1){
            cout<<"StackOverflow";
            return;
        }
        top++;
        arr[top]=x;
    }

    void Pop(){
        if(top==-1){
            cout<<"StackUnderflow";
            return;
        }

        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"StackUnderflow";
            return -1;
        }
        return arr[top];
    }
    bool Empty(){
        return top==-1;
    }

};

int main(){
     
     Stack st;

     st.Push(1);
     st.Push(2);
     st.Push(3);
     cout<<st.Top()<<endl;
     st.Pop();
      st.Pop();
       st.Pop();
        st.Pop();
     
    return 0;

}