#include<bits/stdc++.h>
using namespace std;
//bujhi nai
//vull oo acea
int n,m;
const int N=1e5+3;
vector<vector<int>> g[N];//adjacency list
int cost=0;
vector<int>dist(N),parent(N);//distance//parent
vector<bool>vis(N);
const int INF=1e9;
void primsMST(int source){
    for(int i=0;i<n;i++){
        dist[i]=INF;
        //initially distance
    }
    set<vector<int>>s;
    //{weight,vertex}
    distance[source]=0;
    s.insert({0,source});
    while(!s.empty()){
        auto x=*(s.begin());
        s,erase(x);
        vis[v[1]]= true;
        int u=x[1];
        int v=parent[x[1]];
        int w=x[0];
        cout<<u<<" "<<v<<" "<<w<<endl;
        cost +=w;
        for(auto it:g[x[1]]){
            if(vis[it[0]]) continue;

            if(dist[it[0]]>it[1]){
                s.erase({dist[it[0]],it[0]});
                dist[it[0]]=it[1];
                s.insert({dist[it[0]],it[0]});
                parent[it[0]]=x[1];
            }
        }
    }
}


int main(){
     cin>>n>>m;
     for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});

     }
     primsMST(0);
     cout<<cost<<endl;
     
     
    return 0;

}