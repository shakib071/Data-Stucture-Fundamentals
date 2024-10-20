#include<bits/stdc++.h>
using namespace std;

//recursive
//explanation algorithm khatay acea
const int N=1e5+5;
vector<int>v[N];
bool vis[N];

void dfs(int src){

    cout<<src<<endl;
    vis[src]=true;

    for(int child : v[src]){
       if(!vis[child]){
        dfs(child);
        //not shortest path
       }
    }
}

int main(){
     
     int n,e;
     //n->node e->edges
     cin>>n>>e;

     while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
     }

     memset(vis,false,sizeof(vis));
     int src;//source
     cin>>src;
     dfs(src);
     
     
    return 0;

}