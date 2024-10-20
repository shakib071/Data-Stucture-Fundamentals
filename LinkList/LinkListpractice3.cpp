#include<bits/stdc++.h>
using namespace std;

class node{//A node is a structured variable (or object) containing at least one field whose type is a pointer type.
  public:
  int data;
  node* next;

  node(int val){
    data=val;
    next=NULL;
  }

};

void insertAtHead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        n->next=n;

        head=n;
        return;
    }

    node* temp=head;
    while(temp->next !=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;

}

void InsertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    while(temp->next !=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;

}

void display(node* head){
    node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;

    }while(temp!=head);
    cout<<endl;
}

void deleteAtHead(node* &head){
    node* temp=head;
    while(temp->next!=head){
        temp=temp->next;

    }
    node* todelete=head;
    temp->next=head->next;
    head=head->next;
    delete todelete;
}

void deletion(node* &head,int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    node* temp=head;
    int count=1;
    while(count!=pos-1){
        temp=temp->next;
        count++;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

int main(){
     
     
     
    return 0;

}