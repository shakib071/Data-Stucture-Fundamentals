//bfs technique
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+3;

vector<int>adj[N];
bool vis[N];
int parentArray[N];
bool ans=false;

void bfs(int s){
    queue<int>q;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        int parent=q.front();
        q.pop();
        cout<<parent<<endl;
        for(int child:adj[parent]){
            if(vis[child]==true && parentArray[parent]!=child){
             //parent er jekhan theke asche ar jekhane jacci 2  same hole cycle nai
             //karon undirected graph 2 dikei jay
             //visted too true to hetei hbe
             ans=true;
            }
            if(!vis[child]){//false hole
                vis[child]=true;
                parentArray[child]=parent;
                q.push(child);
            }
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
            bfs(i);
        }
     }

     if(ans) cout<<"cycle found"<<endl;
     else cout<<"cycle not found"<<endl;
     
    return 0;

}