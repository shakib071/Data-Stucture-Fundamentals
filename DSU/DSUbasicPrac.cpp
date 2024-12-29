//Code by shakib071
//https://codeforces.com/profile/shakib071
#include<bits/stdc++.h>
#define ll long long int
#define forn(n) for(int i=0;i<n;i++)
using namespace std;

const int N=1e5+5;
int par[N];
int groupsize[N];
int level[N];

void dsu_initialization(int n){
    for(int i=1;i<n;i++){
        par[i]=-1;
        groupsize[i]=1;
        level[i]=0;
    }
}

int find(int node){
    if(par[node]==-1) return node;
    
    return par[node]=find(par[node]);

}

void dsu_union(int node1,int node2){
    int leaderA=find(node1);
    int leaderB=find(node2);
    par[leaderA]=leaderB;
}

void dsu_union_by_size(int node1,int node2){
    int leaderA=find(node1);
    int leaderB=find(node2);

    if(groupsize[leaderA]>groupsize[leaderB]){
        par[leaderB]=leaderA;
        groupsize[leaderA]+=groupsize[leaderB];
    }
    else {
        par[leaderA]=leaderB;
        groupsize[leaderB]+=groupsize[leaderA];
    }
}

void dsu_union_by_level(int node1,int node2){
    int leaderA=find(node1);
    int leaderB=find(node2);

    if(level[leaderA]>level[leaderB]){
        par[leaderB]=leaderA;

    }
    else if(level[leaderB]>level[leaderA]){
        par[leaderA]=leaderB;
    }
    else{
        par[leaderA]=leaderB;
        level[leaderB]++;
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    dsu_initialization(7);
    dsu_union_by_level(1,2);
    dsu_union_by_level(2,3);
    dsu_union_by_level(4,3);
    dsu_union_by_level(4,5);
    dsu_union_by_level(5,6);
    // dsu_union_by_level(67,5);
    // dsu_union_by_level(3,4);
    cout<<find(1)<<endl;
    cout<<find(3)<<endl;
    
    return 0;

}