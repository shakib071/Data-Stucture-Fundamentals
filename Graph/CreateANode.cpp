#include<bits/stdc++.h>
using namespace std;

class Node{

    public:

    int val;
    Node* next;//porer node er address
    //porer group er address
    //porer class er address

    Node(int data){
        val=data;
        next=NULL;
    }
};

int main(){
     
    //  Node a,b;

    //  a.val=10;
    //  b.val=20;
    //  a.next=&b;
    //  b.next=NULL;

    //  cout<<a.val<<endl;
    //  cout<<b.val<<endl;
    // cout<<a.next->val<<endl;//-> eta dereference kore  
     
     Node a(10);
     Node b(20);

     a.next=&b;

     cout<<a.val<<endl;
     
     cout<<b.val<<endl;
    cout<<a.next->val<<endl;//-> eta dereference kore  
     
    return 0;

}