#include<bits/stdc++.h>
using namespace std;
vector<bool>vis;
int n,m;

vector<vector<int>>adj;
vector<int>component;

int get_comp(int idx){
    if(vis[idx]){
        return 0;
    }
    vis[idx]=true;
    int ans=1;
    for(auto i: adj[idx]){
        ans+=get_comp(i);
    }
    return ans;//ekta connected component a size ekhane debe
}
//ekta component er pura ta jabo ar size bolbe get comp
//func //jotogula component acaea otogula component er size debe


int main(){
     
     cin>>n>>m;
     adj = vector<vector<int>>(n);
     vis=vector<bool>(n);

     for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
     }

     for(int i=0;i<n;i++){
        if(!vis[i]){
           component.push_back(get_comp(i));
        }
     }

     for(auto i : component){
        cout<<i<<" ";
        //size of connected components 
     }
     cout<<endl;
     cout<<component.size()<<endl;
     //how many connected component

     
    return 0;

}