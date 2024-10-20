#include<bits/stdc++.h>
using namespace std;

//bfs technique

void toplogicalSortBFS(){
         int n,m;
      //n number of node and m number  of edges
       cin>>n>>m;
       int count=0;
       vector<vector<int>>adj_list(n);
       //n ta nilei hbe karon eta directed (ekmukhi)
       vector<int> indeg(n,0);
       //indegree initialize with zero

       for(int i=0;i<m;i++){
         int u,v;
         cin>>u>>v;
         //u->v edge input nicci
         //directed//ekmukhi
         //edges input//
     //kar shate kar input acea 
     //ami jeta korci eta 78 page algorithm khatar graph dekhe
   
         adj_list[u].push_back(v);
         indeg[v]++;
         //u theke v er dike jacche tai v er indegree 1 beriye debo
       }
       queue<int>pq;

       for(int i=1;i<n;i++){
          if(indeg[i]==0){
            pq.push(i);
          }
       }

       while(!pq.empty()){
        count++;

        int x=pq.front();
        pq.pop();
        cout<<x<<" ";

        for (auto it : adj_list[x])
        {
            indeg[it]--;
            if(indeg[it]==0){
                pq.push(it);
            }
        }
        

       }
       
       cout<<"f"<<count<<endl;
}

//DFS diye kora jay time pele sikhe ne
//finishing time/discovery time diyeoo sorting kora jay
//shikhe nis
//shekhar por ei comment delete kore dis 

int main(){
     
      toplogicalSortBFS();
     
    return 0;

}