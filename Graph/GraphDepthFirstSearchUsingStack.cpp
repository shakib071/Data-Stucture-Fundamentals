#include<bits/stdc++.h>
using namespace std;

const int N=1e5+2;
bool vis[N];//visited marker //initialize with zero
vector<int>adj[N];


void dfs(int s){ 

   stack<int>S;
   S.push(s);

   while (!S.empty()){

    int node=S.top();
    S.pop();
   
   if (!vis[node])
        {
            cout << node << " ";
            vis[node] = true;
        }
     for(auto it=adj[node].begin(); it!=adj[node].end();it++){
        if(!vis[*it]) S.push(*it);
     }
    

   }
   
   

}

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

        dfs(s);
     
    return 0;

}