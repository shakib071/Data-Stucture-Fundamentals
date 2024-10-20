#include<bits/stdc++.h>
using namespace std;

//using queue for bfs
//level track arekta bfs code acea okhane acea

const int N=1e5+2;
bool vis[N];//visited marker //initialize with zero
vector<int>adj[N];

int main(){
     for(int i=0;i<N;i++){
            vis[i]=0;
     }
   
     int n,m;
     //n number of node and m number  of edges
     cin>>n>>m;

     int x,y; //edges input//
     //kar shate kar input acea 
     //ami jeta korci eta 75 page algorithm khatar graph dekhe
   

     for(int i=0;i<m;i++){
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
        //x er list a y and vise versa
        //2 way list
        //undirected

     }

   

     int s;
     //starting vertex / edge
     //suru hoice kotha theke seta input korbo
     cin>>s;

  queue<int>q;
     q.push(s);//startin vertex
     //manually input nite paris
     vis[s]=true;

     while(!q.empty()){

        int node = q.front();//fornt a je acea setar list dhore jabo
        //ar jegula visited na seta queue a rakhbo
        //evabe cholte thakbe

        q.pop();

        cout<<node <<endl;
       
       vector<int>::iterator it;//vector iterator //index diyeoo kora jay
       
       for(it=adj[node].begin();it != adj[node].end();it++){
          
          if(!vis[*it]){//dereferencing it
              vis[*it]=1;
              q.push(*it);
          }
       }


     }





     
    return 0;

}