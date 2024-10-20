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

bool binarySearch(node* root, int x){
//binary tree te binary search
//time complexity kom;
  if(root==NULL) return false;
  if(root->data==x) return true;

  if(x<root->data) {
    return binarySearch(root->left,x);
  }
  else{
    return binarySearch(root->right,x);
  }

  //complixity  O(h)//h->height
  //log(N)//N->number of node
  //2 ta same 

}

void insertAtBST(node* &root,int x){
    //last er leaf a add hoy shob
    if(root== NULL){
        root= new node(x);
        return;
    }
    if(x < root->data){
      if(root->left==NULL){
        root->left= new node(x);
      }
      else{
        insertAtBST(root->left,x);
      }
    }
    else{
        if(root->right==NULL){
        root->right= new node(x);
      }
      else{
        insertAtBST(root->right,x);
      }
    }
}

node* convertArrayToBST(int a[],int n,int l,int r){
    if(l>r) return NULL;
    int mid=(l+r)/2;
    node* root=new node(a[mid]);
    node* leftroot=convertArrayToBST(a,n,l,mid-1);
    node* rightroot=convertArrayToBST(a,n,mid+1,r);
    root->left=leftroot;
    root->right=rightroot;
    return root;
}

int main(){
     
    //  node* root=input();
    //  levelOrder(root);
   // //search
    //  if(binarySearch(root,10)){
    //     cout<<"yes found";
    //  }
    //  else cout<<"no";

    // //insert in BST
    //  insertAtBST(root, 13);
    //   insertAtBST(root, 22);
    //    insertAtBST(root, 27);
    //    levelOrder(root);

    // convert array to BST
    //must be sorted array
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    node* root= convertArrayToBST(a,n,0,n-1);
    levelOrder(root);
    return 0;

}
