#include<bits/stdc++.h>
using namespace std;

const int N=1e5+3;

vector<int>adj[N];
bool vis[N];
int parentArray[N];
bool ans=false;

void dfs(int parent){
    vis[parent]=true;
    cout<<parent<<endl;
    for(auto child : adj[parent]){
        if(vis[child]==true and child!=parentArray[parent]){
             //parent er jekhan theke asche ar jekhane jacci 2  same hole cycle nai
             //karon undirected graph 2 dikei jay
             //visted too true to hetei hbe
             ans=true;
        }
        if(vis[child]==false){
             parentArray[child]=parent;
             //agea parent update korte hbe 
             //tarpor recurtion
             //koron noile parent update na korei recurtion korbe
             
            dfs(child);
           
        }
    }
}

int main(){
     
       int n,e;
     cin>>n>>e;
     while(e--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);

     }
  memset(vis,false,sizeof(vis));
  memset(parentArray,-1,sizeof(parentArray));
     ans=false;
     for(int i=0;i<n;i++){
        //disconnect graph hote pare 
        //tai visited na hole abar bfs chalabo
        if(!vis[i]){
            dfs(i);
        }
     }

     if(ans) cout<<"cycle found"<<endl;
     else cout<<"cycle not found"<<endl;
     
   
     
    return 0;

}