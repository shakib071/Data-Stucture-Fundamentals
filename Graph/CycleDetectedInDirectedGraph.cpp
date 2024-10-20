#include<bits/stdc++.h>
using namespace std;


bool iscycle(int src,vector<vector<int>>&adj,vector<bool> &visited,vector<int>&Stack)
{
  //src: The current node being explored.
  Stack[src]=true;
  if(!visited[src]){
    visited[src]=true;
    for(auto i: adj[src]){
      if(!visited[i] and iscycle(i,adj,visited,Stack)){
        return true;
      }

      if(Stack[i]) return true;
    }
  }
  Stack[src]=false;

  return false;
}

void CycleDetectionDFS(){
  //apna collage
     int n,m;
    cin>>n>>m;
     //n number of node and m number  of edges
    vector<vector<int>>adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        //u->v
        cin>>u>>v;
        adj[u].push_back(v);
        
    }
   
   bool cycle =false;

    vector<int>Stack(n,0);
    vector<bool>visited(n,false);

    for(int i=0;i<n;i++){
      if(!visited[i] and iscycle(i,adj,visited,Stack)){
        cycle=true;
        break;
      }
    }
    
    if(cycle){
      cout<<"Cycle is There"<<endl;
    }
    else cout<<"Cycle is not there"<<endl;
}

int main(){
     
  //  CycleDetectiondirectedDFS();
  CycleDetectionDFS();
     
    return 0;

}