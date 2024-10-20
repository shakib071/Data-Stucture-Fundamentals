#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    int level;
    node* left;
    node* right;

    node(int val,int l){
        data=val;
        level=l;
        left=NULL;
        right=NULL;

    }
};


node* input(){
    int val;
    cin>>val;
    node* root;
    if(val==-1) root=NULL;
    else {
        root=new node(val,0);
    }
    queue<node*>q;
    if(root!=NULL) q.push(root);

    while(!q.empty()){
        node* parent=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;

        node* myleft;
        node* myright;

        if(l==-1) myleft=NULL;
        else myleft= new node(l,parent->level+1);
        if(r==-1) myright=NULL;
        else myright= new node(r,parent->level+1);

        parent->left=myleft;
        parent->right=myright;

        if(parent->left!=NULL) q.push(parent->left);
        if(parent->right!=NULL) q.push(parent->right); 
    }
    return root;
}

vector<int>v;

void levelOrder(node* root,int x){
    if(root==NULL) return;
    queue<node* >q;
    q.push(root);
    while(!q.empty()){
        node* f=q.front();
        q.pop();

        if(f->level==x)v.push_back(f->data);
        if(f->left!=NULL){
            q.push(f->left);
        }
        if(f->right!=NULL) q.push(f->right);
        
    }
}

int main(){
     
     node* root=input();
     int x;
     cin>>x;
     v.clear();

     levelOrder(root,x);
    if(!v.empty()){
    for(auto i : v){
        cout<<i<<" ";
     }
    }
     else{
        cout<<"Invalid"<<endl;
     }
     
    return 0;

}