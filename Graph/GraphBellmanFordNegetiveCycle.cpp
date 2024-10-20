#include<bits/stdc++.h>
using namespace std;

//positive negetive 2 ta weight er jonnoi kaj kore
//negetive cycle holeoo problem nai
//karon n-1 bar cholbe 
//kintu ans vul hote pare
///negetive cycle er arekta code acea


class Edge{
    public:
    int u,v,c;
    //node edge cost

    Edge(int uu,int vv,int cc){
        u=uu;
        v=vv;
        c=cc;
    }
};

const int N=1e5+5;
int dis[N];

int main(){
     
     int n,e;
     cin>>n>>e;

     vector<Edge>EdgeList;
//directed;
     while(e--){
        int u,v,c;
        cin>>u>>v>>c;

        EdgeList.push_back(Edge(u,v,c));

     }

     for(int i=0;i<n;i++){
        dis[i]=INT_MAX;
     }

     int src;
     cin>>src;//source
     dis[src]=0;
     
     for(int i=1;i<=n-1;i++) {
     for(Edge ed : EdgeList){
        int u,v,c;
        u=ed.u;
        v=ed.v;
        c=ed.c;

        if(dis[u]<INT_MAX && dis[u]+c <dis[v] ){
           dis[v]=dis[u]+c;
           //path relax

        }

       }
     }

     bool cycle= false;
      for(Edge ed : EdgeList){
        int u,v,c;
        u=ed.u;
        v=ed.v;
        c=ed.c;

        if(dis[u]<INT_MAX && dis[u]+c <dis[v] ){
           dis[v]=dis[u]+c;
           //path relax
            cycle=true;

        }

       }
    if(cycle) cout<<"Cycle Detected"<<endl;
    else{
     for(int i=0;i<n;i++){
        cout<<i<<"->"<<dis[i]<<endl;
        //source theke i er distance
     }
    }
     
    return 0;

}