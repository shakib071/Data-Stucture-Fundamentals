#include<bits/stdc++.h>
using namespace std;

//BST node
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

void preorder(node* root){//traversal
    //base case
    if(root==NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){//traversal
    //base case
    if(root==NULL) return;
    postorder(root->left);
    postorder(root->right);
     cout<<root->data<<" ";
}

void Inorder(node* root){//traversal
    //base case
    if(root==NULL) return;
    Inorder(root->left);
      cout<<root->data<<" ";
    Inorder(root->right);
    
}

void levelOrder(node* root){
    if(root==NULL) return;
    queue<node* >q;
    q.push(root);
    while(!q.empty()){
        node* f=q.front();
        q.pop();

        cout<<f->data<<" ";
        if(f->left!=NULL){
            q.push(f->left);
        }
        if(f->right!=NULL) q.push(f->right);
        //amra if(f->left) condition dileoo hbe
        //NULL value k false hisebe ney
        //tai emniteoo NULL hole execute hbe na
    }
}

node* input(){
     int val;
    cin >> val;
    node *root;
    if (val == -1)
        root = NULL;
    else
        root = new node(val);
    queue<node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ano
        node *p = q.front();
        q.pop();

        // 2. jabotiyo ja kaj ache
        int l, r;
        cin >> l >> r;
        node *myLeft;
        node *myRight;
        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new node(l);
        if (r == -1)
            myRight = NULL;
        else
            myRight = new node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3. children gulo ke push koro
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
//     int val;
//     cin>>val;
//     node* root;
//     if(val==-1) root=NULL;
//     else root=new node(val);

//     queue<node* > q;
//     if(root) q.push(root);//root null hole input hbe na
//     while(!q.empty()){
//         node* p=q.front();//parent
//         q.pop();
//         int l,r;
//         cin>>l>>r;
//         node* myleft;
//         node* myright;//left right a input debo ekhon

//         if(l==-1) myleft==NULL;
//         else myleft=new node(l);
//         if(r==-1) myright=NULL;
//         else myright=new node(r);
         
//          p->left=myleft;
//          p->right=myright;
      
//        if(p->left) q.push(p->left);
//        if(p->right) q.push(p->right);

//     }
// return root;
}

int count_node(node* root){
    if(root==NULL) return 0;
    int l=count_node(root->left);
    int r=count_node(root->right);
    return l+r+1;
}

int count_leaf(node* root){
    if(root==NULL) return 0;
    if(root->left==NULL and root->right==NULL){
        //mane leaf node;
        return 1;
    }
    else{
        int l=count_leaf(root->left);
        int r=count_leaf(root->right);
        return l+r;
    }
}

int max_height(node* root){
    if(root==NULL) return 0;
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
}

int main(){

    // //manual innput
    //  node* root=new node(10);
    //   node* a=new node(20);
    //   node* b=new node(30);
    //   node* c=new node(40);
    //   node* d=new node(50);
    //   node* e=new node(60);
    //   node* f=new node(70);
    //   node* g=new node(80);
    //   node* h=new node(90);
    //   node* i=new node(100);

    //   //connection
    //   //manual input
    //   root->left=a;
    //   root->right=b;
    //   a->left=c;
    //   a->right=h;
    //   c->right=e;
    //   b->right=d;
    //   d->left=f;
    //   d->right=g;
    //   h->right=i;

    //input   

    node* root=input();
    
    //call
   cout<<count_node(root)<<endl;
   cout<<count_leaf(root)<<endl;
   cout<<max_height(root)<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    Inorder(root);
     cout<<endl;
     levelOrder(root);
     cout<<endl;
    return 0;

}