//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

const int N=1e5+5;
int parent[N];
int group_size[N];

void dsu_initialize(int n){
    for(int i=0;i<n;i++){
        parent[i]=-1;
        group_size[i]=1;
    }
}

int dsu_find(int node){
    if(parent[node]==-1) return node;
    return parent[node]=dsu_find(parent[node]);
}

void dsu_union_by_size(int node1, int node2){
    int leaderA=dsu_find(node1);
    int leaderB=dsu_find(node2);
    if(group_size[leaderA]>group_size[leaderB]){
        parent[leaderB]=leaderA;
        group_size[leaderA]+=group_size[leaderB];
    }
    else {
        parent[leaderA]=leaderB;
        group_size[leaderB]+=group_size[leaderA];
    }
}


int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
     int n,e;
     cin>>n>>e;
     dsu_initialize(n);
     bool cycle=false;

     while(e--){
        int a,b;
        cin>>a>>b;
        int leaderA=dsu_find(a);
        int leaderB=dsu_find(b);
        if(leaderA == leaderB) cycle=true;
        else {
            dsu_union_by_size(a,b);
        }
     }
     if(cycle) cout<<"Cycle acea"<<endl;
     else cout<<"Cycle nai"<<endl;
     
    return 0;

}