#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data=val;
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
        root=new node(val);
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
        else myleft= new node(l);
        if(r==-1) myright=NULL;
        else myright= new node(r);

        parent->left=myleft;
        parent->right=myright;

        if(parent->left!=NULL) q.push(parent->left);
        if(parent->right!=NULL) q.push(parent->right); 
    }
    return root;
}

vector<int> v;

void traverse(node* root){
    if(root==NULL) return;

    if(root->left==NULL && root->right==NULL){
        v.push_back(root->data);
    }
   
    traverse(root->left);
    traverse(root->right);
}


int main(){
     
     node* root=input();
     v.clear();
     traverse(root);
     sort(v.begin(),v.end(),greater<int>());

     for(auto i : v){
        cout<<i<<" ";
     }
     
     
    return 0;

}