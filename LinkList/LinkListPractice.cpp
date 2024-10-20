#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void InsertAtTail(node* &head,int val){
    node* n= new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
   node* temp=head;
   while(temp->next!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
   }
   cout<<endl;
}

void InsertAtHead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}

bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp!=NULL){
            if(temp->data==key){
                return true;
            }
        }
    }

    return false;
}

void deleteAtHead(node* &head){
    node* todelete=head;
    head=head->next;
    delete todelete;
}

void deletation(node* &head,int val){
    if(head==NULL){
        return;
    }
     if(head->next==NULL){
        deleteAtHead(head);
        return;
     }
     node* temp=head;
     while(temp->next->data!=val){
        temp=temp->next;

     }
     node* todelete=temp->next;
     temp->next=temp->next->next;
     delete todelete;
}

void insertAtPosition(node* &head,int val,int pos){
    node * n=new node(val);
    node* temp=head;
    n->next=NULL;
    if(pos<1){
        return;
    }
    if(pos==1){
     head->next=temp;
     head=n;
    }
    else{
        while(--pos>1){
            temp=temp->next;

        }
        n->next=temp->next;
        temp->next=n;
    }
}

int main(){
      node* head=NULL;
     InsertAtTail(head,1);
     InsertAtTail(head,2);
     InsertAtTail(head,3);
    //  display(head);

     InsertAtHead(head,4);
    //  display(head);
     
    //  cout<<search(head,4)<<endl;
    //  cout<<search(head,5);
    // deletion(head,2);
    // display(head);
    // deleteAtHead(head);
    // display(head);
    insertAtPosition(head,7,3);
    insertAtPosition(head,8,3);
    display(head);
    return 0;
     
     
    return 0;

}