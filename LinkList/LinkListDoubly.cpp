#include<bits/stdc++.h>
#include<iostream>
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

void insertAtHead(node* &head, int val){
     node* n= new node(val);
    n->next=head;
    if(head!=NULL){
      head->prev=n;
    }
    
    head=n;
}

void insertAttail(node* &head, int val){
    
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }

    node* n= new node(val);
    node* temp=head;
    
    while(temp->next!=NULL){
      
       temp= temp->next;
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
    if(head==NULL) return;
    node* todele=head;
    head=head->next;//head change hoye gece
    //null er previous access kora jay na;
    if(head!=NULL){
        head->prev=NULL;
    }
 

    delete todele;
}

void deletion(node* &head,int pos){

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
    //append last k node

    node* newHead;
    node* newTail;
    node* tail=head;

    int l=length(head);
    k=k%l;//initially ifk<l then k er value change hbe na
    int count=1;
    while(tail->next!=NULL){
        if(count==l-k){
            newTail=tail;
        }
       if( count==l-k+1){
        newHead=tail;
       }
       tail=tail->next;
       count++;
    }

    newTail->next=NULL;
    tail->next=head;
return newHead;

}

void createintersection(node* &head1, node* &head2,int pos){
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

int intersection(node* &head1,node* &head2){
    //check intersection
    int l1=length(head1);
    int l2=length(head2);
    int d=0;//difference initialy
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

node* merge(node* &head1, node* &head2){
    node* p1=head1;
    node* p2=head2;
    node* dummyNode=new node (-1);
    node* p3=dummyNode;

    while(p1!=NULL && p2 !=NULL){
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
    return dummyNode->next;
}

node* recurtionMerge(node* &head1, node* &head2){
    
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
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

void display_reverse(node* tail){
   //insert er somoy tail er track rakthe hobe 
   //kore nis
   node* temp=tail;

   while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->prev;
   }
   cout<<endl;

}

void insertAtPos(node* &head, int val, int pos){
    if(pos==0){//index
        insertAtHead(head,val);
        return;
    }
    node* n=new node(val);
    node* temp=head;
    for(int i=1;i<pos-1;i++){
         if(temp==NULL) return;
        temp=temp->next;
       
        
    }
    if(temp->next==NULL){
        insertAttail(head,val);
        return;
    }
   
   n->next=temp->next;
   temp->next=n;
   n->next->prev=n;
   n->prev=temp;

}

void reverse(node* &head,node* &tail){
    node* i=head;
    node* j=tail;
    while(i!=j and i->next!=j){//bijor hole i!=j ar jor hole i->next!=j
      swap(i->data,j->data);
      i=i->next;
      j=j->prev;
    }
}

bool ispalindrom(node* &head,node* tail){
    node* temp1=head;
    node* temp2=tail;
    int j=length(head)-1;
  for(int i=0;i<length(head);i++){
     if(i>=j) break;
     if(temp1->data!=temp2->data){
        return false;
     }
     j--;
     temp1=temp1->next;
     temp2=temp2->prev;

  }

   return true;
}

bool ispalindromm(node* &head,node* tail){
    node* temp1=head;
    node* temp2=tail;
    
   while(temp1 != NULL || temp2 !=NULL){
     
     if(temp1->data!=temp2->data){
        return false;
     }
     temp1=temp1->next;
     temp2=temp2->prev;

}
   return true;
}


int main(){
     
    //  node* head=NULL;

    //  insertAttail(head,1);
    //  insertAttail(head,2);
    //  insertAttail(head,3);
    //  insertAttail(head,4);
    //  insertAttail(head,5);
    // //  display(head);
    //  insertAtHead(head,7);
    //  insertAtHead(head,8);
    // //  deleteAtHead(head);
    // //  deletion(head,3);
    // node* newhead=kappend(head,3);
    //  display(newhead);
    // //  insertAtHead(head,8);
    // //  display(head);

    //intersection

//     node* head1=NULL;
//     node* head2=NULL;
//     insertAttail(head1,5);
//     insertAttail(head2,2);
//     insertAttail(head1,8);
//     insertAttail(head1,4);
//     insertAttail(head2,11);
//     insertAttail(head2,9);

//     createintersection(head1,head2,2);
//     display(head1);
//     display(head2);
// cout<<intersection(head1,head2)<<endl;

//merge2Sorted link list
 node* head1=NULL;
    node* head2=NULL;
    insertAttail(head1,1);
    insertAttail(head2,2);
    insertAttail(head1,3);
    insertAttail(head2,4);
    insertAttail(head1,5);
    insertAttail(head2,6);

    // node* newhead=merge(head1,head2);
    // display(newhead);
    node* newhead=recurtionMerge(head1,head2);
    display(newhead);

    return 0;

}