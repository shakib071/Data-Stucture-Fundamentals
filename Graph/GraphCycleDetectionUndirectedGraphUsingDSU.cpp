#include<bits/stdc++.h>
using namespace std;
//DSU and cycle detection 
const int N= 1e5+6;
vector<int> parent(N);
vector<int>sz(N);//size

void make_set(int v){
    parent[v]=v;
    sz[v]=1;
    //initialy sobai sobar parent and size 1'
}

int find_set(int v){
    if(v==parent[v]){
        return v;
    }
    return parent[v]=find_set(parent[v]);//recusively 
    //parent khujteci
}

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
     vector<vector<int>>edges;

     for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        edges.push_back({u,v});
     }
bool cycle=false;
     for(auto i: edges){
        int u=i[0];//vector set er 1st ta u 2nd ta v
        int v=i[1];
        int x=find_set(u);
        int y=find_set(v);
        if(x==y){
          cycle=true;
        }
        else {
           union_sets(u,v);
        }
     }

     if(cycle)
        cout<<"Cycle is Present"<<endl;
    else cout<<"NO cycle"<<endl;
     
    return 0;

    //boi por   

}