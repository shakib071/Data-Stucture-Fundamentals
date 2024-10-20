#include<bits/stdc++.h>
using namespace std;
const int N=1e5+3;

vector<int>adj[N];
bool vis[N];
bool pathvisit[N];
bool ans=false;

void dfs(int parent){
    cout<<parent<<endl;
    vis[parent]=true;
    pathvisit[parent]=true;

    for(int child :  adj[parent]){
        if(pathvisit[child]){
            //path visit hole visited too hbei
            //check na korleoo hoy
            ans=true;
        }
        if(!vis[child]){
            dfs(child);
        }
    }
    //kaj shes //mane ferot asbe
    //tarpor path false kore debo
    pathvisit[parent]=false;

}

int main(){
     
     int n,e;
     cin>>n>>e;
     while(e--){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
       

     }
  memset(vis,false,sizeof(vis));
  memset(pathvisit,false,sizeof(pathvisit));
    ans=false;
  for(int i=0;i<n;i++){
    if(!vis[i]){
        dfs(i);

        //eta na korle disconnected 
        //ba path nai emon node er cycle 
        ///detect kora jaito na
    }
  }
      if(ans) cout<<"cycle found"<<endl;
     else cout<<"cycle not found"<<endl;
    return 0;

}