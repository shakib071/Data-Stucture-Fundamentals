#include<bits/stdc++.h>
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

void insertAtHead(node* &head,int val){
    node* n= new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* &head,int val){
    node* n= new node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;

}

void display(node* head){
    node* temp=head;
    while(temp!=head){
        cout<<temp->data<<" "<<endl;
       temp=temp->next;
    }

}

bool search(node* head, int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deletionAtHead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deletionAtHead(head);
        return;
    }
    node* temp=head;
    while(head->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;

    delete todelete;

}

void insertAtPostion(node* &head,int val,int pos){
    node* n=new node(val);
    node* temp=head;
    if(pos<1){
        return;
    }
    if(pos==1){
        insertAtHead(head,val);
        return;
    }
    while(--pos>1){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;

}

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }

    return prevptr;
}

node* recursiveReverse(node* &head){
    if( head==NULL || head->next==NULL){
        return head;

    }
    node* newhead=recursiveReverse(head->next);
    head->next->next=head;
    head=NULL;

}

node* reverseKnode(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
        head->next=reverseKnode(nextptr,k);

    }
    return prevptr;
}

void makeCycle(node* &head,int pos){

    node* temp=head;
    node* startNode;

    int count=1;
    while(temp->next!=NULL){

        if(count==pos){
            startNode=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=startNode;
}

bool detectCycle(node* &head){
    node* slow=head;
    node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            return true;
        }
        return false;
    }
}

void removeCycle(node* &head){
    node* slow=head;
    node* fast= head;
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(slow!=fast);
    fast=head;
    while(slow->next!=fast->next){
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;

}

int main(){
     
     
     
    return 0;

}