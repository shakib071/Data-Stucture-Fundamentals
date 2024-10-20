#include<bits/stdc++.h>
using namespace std;

class node{
    public:

    int data;
    node* next;
    node* prev;

    node(int val){
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void  insertAtHead(node* &head,int val){
    node* n= new node(val);
    n->next=head;
    if(head!=NULL){
        head->prev=n;
    }
    head=n;
}

void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }

    node* n=new node(val);
    node* temp=head;
    while(head->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
}
cout<<endl;
}

void deleteAtHead(node* &head){
  node* todelete=head;
  head=head->next;
  head->prev=NULL;

  delete todelete;
}

void deletion(node* head,int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }

    node* temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->next;
        count++;
    }
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
        temp->next->prev=temp->prev;
    }

    delete temp;
}

int length(node* head){

    int l=0;
    node* temp=head;
    while(temp!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}

node* kappend(node* &head,int k){

    node* newHead;
    node* newTail;
    node* tail=head;

    int l=length(head);
    k=k%l;
   int count=1;
    while(tail->next!=NULL){
        if(count=l-k){
         newTail=tail;
        }
        if(count==l-k+1){
            newHead=tail;
        }
        tail=tail->next;
        count++;
    }
    newTail->next=NULL;
    tail->next=head;

    return newHead;

}

void createInsersection(node* &head1,node* &head2,int pos){
    node* temp1=head1;
    pos--;
    while(pos--){
        temp1=temp1->next;
    }
    node* temp2=head2;
    while(temp2->next!=NULL){
        temp2=temp2->next;
    }
    temp2->next=temp1;
}

int checkIntersection(node* &head1,node* &head2){
    int l1=length(head1);
    int l2=length(head2);
    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>l2){
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else{
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while(d){
     ptr1=ptr1->next;
     if(ptr1==NULL){
        return -1;
     }
     d--;
    }
     while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
     }
     return -1;

    }

node* merge(node* &head1, node* & head2){
    node* p1=head1;
    node* p2=head2;
    node* dummyNode=new node(-1);
    node* p3=dummyNode;

    while(p1!=NULL && p2!=NULL){
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
     while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }

    return dummyNode->next;//newhead;
}

node* recurtionMerge(node* &head1, node* &head2){
    if(head1==NULL){
        return head1;
    }
    if(head2=NULL){
        return head2;
    }

    node* result;
    if(head1->data<head2->data){
        result=head1;
        result->next=recurtionMerge(head1->next,head2);
    }
    else{
          result=head2;
        result->next=recurtionMerge(head1,head2->next);
    }
    return result;
}

int main(){
     
     
     
    return 0;

}