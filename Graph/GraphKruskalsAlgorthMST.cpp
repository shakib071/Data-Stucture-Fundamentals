#include<bits/stdc++.h>
using namespace std;

const int N= 1e5+6;

vector<int>parent(N);
vector<int>sz(N);

void make_set(int v){
    parent[v]=v;//initially
    sz[v]=1;//size
}

int find_set(int v){
    if(v== parent[v]){
        return v;
    }

    return parent[v]=find_set(parent[v]);
}
//DSU(dis joint set union)

void union_sets(int a, int b){
    a=find_set(a);
    b=find_set(b);

    if(a!=b){
        if(sz[a]<sz[b]){
            swap(a,b);
        }  
          parent[b]=a;
          sz[a]+=sz[b];
        }
}



int main(){
     
     for(int i=0;i<N;i++){
        make_set(i);
     }

     int n,m;
     cin>>n>>m;

     vector<vector<int>> edges;

     for(int i=0;i<m;i++){
        int u,v,w;//w->weight
        cin>>u>>v>>w;
        edges.push_back({w,u,v});
     }

     sort(edges.begin(),edges.end());
     //sort according to weight
     //vector er set er 1st elememt weight
     //tai na bolleoo weight ay sort hhbe
     int cost=0;
     for(auto i : edges){
        //i holo vector er set
        //tai i[0]-> weight i[1]->u and i[2]->v
        //u,v is connected  edge;
       int w=i[0];
       int u=i[1];
       int v=i[2];

       int x=find_set(u);
       int y=find_set(v);

       if(x==y){
        continue;
        //same parent means cycle
        //so dont include  
       }
       else{
        cout<<u<<" "<<v<<"\n";
        cost+=w;
          union_sets(u,v);
       }
     }
     cout<<cost;
     
    return 0;

}