//unoptimized
//weighted graph
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;
vector<pair<int,int>>v[N];
//kon edge er shathe connected
//ar jawer ki cost seta rakhbo
int dis[N];

void dijkstra(int src){
    queue<pair<int,int>>q;
    //source theke kon edge koto cost seta
    //khatay lekha acea dekh
    q.push({src,0});
    //source er distace source theke 0 ei hbe
    dis[src]=0;
    while(!q.empty()){
        pair<int,int> parent=q.front();
        q.pop();
        int node = parent.first;
        int cost= parent.second;
        // for(int i=0;i<v[node].size();i++){
        //     pair<int,int> child = v[node][i];
        // }
        //or
        for(pair<int,int> child : v[node]){
            int childNode=child.first;
            int childCost=child.second;
            //child a jawer cost
            //queue te je cost acea ota niyei kaj korte hbe
            //jodi pore updated ta thake ota porea abar kaj korbe
            if(cost + childCost<dis[childNode]){
                //path relax
                dis[childNode]=cost +childCost;
                q.push({childNode, dis[childNode]});

            }
        }
    }
}


int main(){
     int n,e;
     cin>>n>>e;
     while(e--){
        int a,b,c;
        //a, b edge c is cost
        cin>>a>>b>>c;

        v[a].push_back({b,c});
        v[b].push_back({a,c});
        // a the b a jawer cost
        //b theke a a jawer cost dhukailam


     }
    //  memset(dis,INT_MAX,sizeof(dis));
    //int max memset nite pare na 
    for(int i=0;i<N;i++){
        dis[i]=INT_MAX;
    }
     //initiallly onek boro value
     //jate 1st path relaxation a value rakhte pare
     dijkstra(0);

     //single source shortest distance print
     //mane source theke or shortest distance koto seta
     for(int i=0;i<n;i++){
        cout<<i<<"->"<<dis[i]<<endl;
        //src theke node gular dis
        //1->6 diye bujhay src theke 1 er 
        //ditance 6
        
     }
    return 0;

}