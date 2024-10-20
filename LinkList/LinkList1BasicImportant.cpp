#include<iostream>
using namespace std;

class node{//A node is a structured variable (or object) containing at least one field whose type is a pointer type.
  public:
  int data;
  node* next;//dynamic ..pointer.
  //porer tar addess store korbe
  //karon data store korar somoy data->next=val kore store kori
  //tai next address peye jabo

  node(int val){
    data=val;
    next=NULL;
  }

};

void InsertAtTail(node* &head,int val){
    node* n=new node(val);
  if(head==NULL){
    head=n;//insert at head oo kora jay
    return;
  }
    node* temp=head;
    while(temp->next !=NULL){
        temp=temp->next;

    }
    temp->next=n;//n dynamic memory ..tai nijei pointer
    //temp->next memory ta rekhe dicche 
     //dereference(temp->next->val)kore value pai
     //amra next er addess tai rakhci 
     //node evabei kaj korche
     //node ekta pointer jeta porer ta value nicche 
     //dereference kore value pacci
     //bujli
     //vule gele ds er module 5 dekh



}


  node* reverseBetween(node* head, int left, int right) {
        if (!head || left == right) return head;

        // Create a dummy node to handle edge cases
        node* dummy = new node(0);
        dummy->next = head;
        node* prev = dummy;

        // Move `prev` to the node just before the 'left' position
        for (int i = 1; i < left; i++) {
            prev = prev->next;
        }

        // Reverse the sublist from 'left' to 'right'
        node* curr = prev->next;
        node* nextNode = nullptr;
        for (int i = 0; i < right - left; i++) {
            nextNode = curr->next;
            curr->next = nextNode->next;
            nextNode->next = prev->next;
            prev->next = nextNode;
        }

        return dummy->next;
    }

void insertAtTAilO1(node* &head,node* &tail,int val){
    node* n=new node(val);
    if(head==NULL){
       head=n;
       tail=n;
       return;
    }
      tail->next=n;
      tail=n;

      //ekane input nite
      //main func a
      //head=NULL and tail =NUll diye intialize korte hbe
      //tarpor pass kore dite hbe
   
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
       cout<<temp->data<<endl;
       temp=temp->next;
    }
    cout<<endl;
}

void InsertAtHead(node*  &head,int val){
    node* n= new node(val);
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
        temp=temp->next;
    }
    return false;
}

void deleteAtHead(node* &head){
  if(head==NULL)return;
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void deletion(node* &head,int val){
//head a delete hoy na eitay
//eta value khuje delete kore 
if(head==NULL){
    return;
}
if(head->next=NULL){
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

void deletionAtPosition(node* &head,int pos){
  
  //oi node ta na thakle error aste pare
  //mane 2 ta node thaklo kintu jodi 3 no node delete korte jai tahile error khabo

   
   node* temp=head;

  if(pos==1){
    deleteAtHead(head);
    return;
  }
  while(--pos>1){//ager node porjonto traverse korche
     //mane 2 ta node thaklo kintu jodi 3 no node delete korte jai tahile error khabo
     //eijonno terminate kore dilam
     //iccha korle kichu print kore boleoo dite paris
        temp=temp->next;
         if(temp==NULL) {
         
           return;
     }
      }

      if(temp->next==NULL){
        //karon temp er next null hole 2 line porer temp->next->next access korte parbo na 
        //segemntation fault khabo
        
        return;
      }

    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

}

void insertAtPosition(node* &head,int val,int pos){
  
  //vs code a vull position acces korte gele segementation fault dey 
   //onno jaygay dey na
   //code thik acea ..pera nai

   //oi node ta na thakle error aste pare
  //mane 2 ta node thaklo kintu jodi 3 no node delete korte jai tahile error khabo


    node* n= new node(val);
    node* temp=head;
    n->next=NULL;
  
  if (pos<1 ){
    return;
  }
  
  if(pos==1){
    n->next=temp;//insertathead function Call korleoo hbe
    head=n;
  }
  else{
      while(--pos>1){
        temp=temp->next;
          if(temp==NULL) {
           return;
     }
      }
     
      n->next=temp->next;
      temp->next=n;
  }

    
}

node* reverse(node* &head){
//itreative way of reverse
  node* prevptr=NULL;
  node* currptr=head;
  node* nextptr;

  while(currptr!=NULL){
    nextptr=currptr->next;
    currptr->next=prevptr;
    prevptr=currptr;
    currptr=nextptr;

  }
  return prevptr;//new head;
}

node* reverseRecursive(node* &head){

  if(head==NULL || head->next==NULL){
    return head;
  }

  node* newhead=reverseRecursive(head->next);
  head->next->next=head;
  head->next=NULL;
  
  return newhead;
}

node* reverseKnodes(node* &head,int k){
  node* prevptr=NULL;
  node*currptr=head;
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
  head->next= reverseKnodes(nextptr,k);
}
return prevptr;
}

void makeCycle(node* &head,int pos){
  //makes a cycle of link list,,like infinite loop

  node*temp=head;
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
  //floyds algorithm//hear and tortoise algorith//cycle detection
node* slow=head;
node*fast=head;
   while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(fast==slow){
      return true;
    }
   }
   return false;
}

void removeCycle(node* &head){
  //cycle acea kina check kora hoice already
 //detect cycle diye
  node* slow=head;
  node* fast=head;

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

void sort(node* &head){
  for(node* i=head; i->next!=NULL;i=i->next){
    for(node* j=i->next;j!=NULL;j=j->next){
      if(i->data>j->data){
        swap(i->data,j->data);//ekhane shudhu value ta change hbe
        //class er location change hbe na
        //dereference kore value niye swap korci
        //OK
      }
    }
  }
}

void displayRecursively(node* head){
   if(head==NULL) return;
   cout<<head->data<<" ";
   displayRecursively(head->next);
}

void displayReverse(node* head){
  //recursion diye
  if(head==NULL) return;
  displayReverse(head->next);
  cout<<head->data<<" ";
}

void removeDuplicate(node* &head){
   
   if(head==NULL || head->next==NULL) return;
    
    node* temp=head;

    while(temp != NULL){
      node* temp1=temp;//vitore next korci tai ekahene next theke newya jabe na
      //karom amra previous diye next ta access korci
      while(temp1->next!=NULL){
        if(temp1->next->data==temp->data){
            node* todelete=temp1->next;
            temp1->next=temp1->next->next;
            delete todelete;
            // continue;
        }
       else  temp1=temp1->next;
      }
      temp=temp->next;
    }
    

}

int main(){
     
     node* head=NULL;
     InsertAtTail(head,1);
     InsertAtTail(head,2);
     InsertAtTail(head,12);
     InsertAtTail(head,4);
     InsertAtTail(head,5);
     InsertAtTail(head,6);
     display(head);
    //  insertAtPosition(head,7,4);
    //  display(head);
    //  deletionAtPosition(head,7);
    // sort(head);
    //  display(head);
    // displayRecursively(head);
     displayReverse(head);
    //  InsertAtHead(head,7);
    //  display(head);
     
    //  cout<<search(head,4)<<endl;
    //  cout<<search(head,5);
    // deletion(head,2);
    // display(head);
    // deleteAtHead(head);
    // display(head);
    // insertAtPosition(head,7,3);
    // insertAtPosition(head,8,3);
    // display(head);
    // node* newhead=reverse(head);
    // display(reverseRecursive(head));
  // int k=2;
  //   node* newhead=reverseKnodes(head,k);
  //  display(newhead);

  // makeCycle(head,3);
  // display(head);
  //makecycle function initialize korle ba link list a 
  //cycle thakle true hbe
// makeCycle(head,3);
//   cout<<detectCycle(head)<<endl;
// removeCycle(head);
// display(head);
    return 0;

}


//Note  //pointer er reference  

// #include <bits/stdc++.h>
// using namespace std;
// void fun(int *&p)//reference nile notun pointer hoy na ..same pointer ei thake
// {
//     cout << &p << endl;
// }
// int main()
// {
//     int val = 10;
//     int *ptr = &val;
//     fun(ptr);
//     cout << &ptr << endl;
//     return 0;
// }