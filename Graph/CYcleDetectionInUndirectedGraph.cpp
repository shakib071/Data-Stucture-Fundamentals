#include<bits/stdc++.h>
using namespace std;

bool iscycle(int src, vector<vector<int>>&adj,vector<bool>&visited,int parent){
    visited[src]=true;

    for(auto i : adj[src]){
        if(i!=parent){
            if(visited[i]){
               return true; 
            }
            if(!visited[i] and iscycle(i,adj,visited,src)){
                return true;
            }
        }
    }
    return false;

    //itialization:
// src is the current node being visited.
// adj is the adjacency list representing the graph.
// visited is a boolean vector to mark visited nodes.
// parent is the parent of the current node.
// Mark the current node as visited:

// visited[src] = true;: Mark the current node as visited to avoid revisiting it in the same DFS traversal.
// Explore neighbors:

// for(auto i : adj[src]): Iterate through all neighbors of the current node.
// Check if the neighbor is not the parent:

// if(i != parent): Ensure that the neighbor being considered is not the parent of the current node. This check is crucial to avoid considering the edge that leads back to the parent, which is a normal scenario in an undirected graph.
// Check for cycles:

// if(visited[i]): If the neighbor has already been visited and it's not the parent, then a cycle is found. Return true.
// if(!visited[i] and iscycle(i, adj, visited, src)): If the neighbor has not been visited, recursively call iscycle on that neighbor. If a cycle is found in the recursive call, return true.
// No cycle found:

// If none of the above conditions are met for any neighbor, return false to indicate that no cycle has been detected in the current DFS branch.


//example 

//Certainly! Let's consider a simple example to illustrate how the cycle detection works using the iscycle function.

// Consider the following undirected graph:
// 0---1
// |\ /|
// | X |
// |/ \|
// 2---3
//src = 0, adj is the adjacency list of the graph, visited is initially [false, false, false, false], and parent is -1 (no parent initially).
// First DFS Call (src=0):

// Mark 0 as visited: visited = [true, false, false, false].
// Iterate through neighbors: 1, 2.
// For neighbor 1:
// Check if 1 is not the parent (initially true): Enter the if block.
// Check if 1 is already visited (false): Move to the next DFS call with iscycle(1, adj, visited, 0).
// Second DFS Call (src=1):

// Mark 1 as visited: visited = [true, true, false, false].

// Iterate through neighbors: 0, 2, 3.

// For neighbor 0:
// Check if 0 is not the parent (true): Enter the if block.
// Check if 0 is already visited (true): Cycle detected! Return true back to the first DFS call.
// The first DFS call receives true from the second DFS call and returns true to the CycleDetectionDFS function.

// Conclusion in CycleDetectionDFS:

// The cycle variable is set to true because a cycle was detected during the DFS traversal.
// Print "Cycle is Present."


}

void CycleDetectionDFS(){
    int n,m;
    cin>>n>>m;
     //n number of node and m number  of edges
    vector<vector<int>>adj(n);
    for(int i=0;i<m;i++){
        int u,v;
        //u->v//v->u
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //input done 
     
     bool cycle=false;

     vector<bool>visited(n,false);

     for(int i=0;i<n;i++){
        if(!visited[i] and iscycle(i,adj,visited,-1)){
            cycle=true;
        }
     }
     if(cycle){
        cout<<"Cycle is Present"<<endl;
     

     }
     else cout<<"Cycle is not Present"<<endl;

}

void CycleDetectionBFS(){
   //amar//eita vlo
   
    int n,m;
    cin>>n>>m;
   bool cycle =false;
   vector<vector<int>>adj(n);
    
    for(int i=0;i<m;i++){
        int u,v;
        //u->v//v->u;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int>visited(n,-1);
    //unvisited -1
    //in queue 0;
    //traversed and po

    //algo khatar 82 page a logic lekha acea
    //na bujle abar dekh


    queue<int>pq;

    int s;
    //graph suru korci kon node theke;
    cin>>s;

    pq.push(s);
    visited[s]=0;

    while(!pq.empty()){
        int node=pq.front();
        pq.pop();
      


        for(auto i = adj[node].begin(); i != adj[node].end(); i++){
            if(visited[*i]==-1){
                pq.push(*i);
                visited[*i]=0;
            }
           else if(visited[*i]==0){
               cycle=true;
                break;
            }
        }
        visited[node]=1;

         if (cycle) {
            cout << "Cycle is Present" << endl;
            return;
           
        }

    }
      cout<<"Cycle is not Present"<<endl;

}

void CycleDetectionBFSS() {
   
    //chargpt 
    //chatgpt amar reference ay diche eta 
    int n, m;
    cin >> n >> m;
    bool cycle = false;
    vector<vector<int>> adj(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        // u->v // v->u;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> visited(n, -1); // unvisited -1, in queue 0, visited 1
    queue<int> pq;

    int s;
    // graph suru korci kon node theke;
    cin >> s;

    pq.push(s);
    visited[s] = 0; // Changed to set it as 0 instead of -1

    while (!pq.empty()) {
        int node = pq.front();
        pq.pop();

        for (auto i = adj[node].begin(); i != adj[node].end(); i++) {
            if (visited[*i] == -1) {
                pq.push(*i);
                visited[*i] = 0; // Changed to set it as 0 instead of 1
            } 

            else if (visited[*i] == 0) {
                cycle = true;
                break;
            }
           
        }
         visited[node]=1;

        if (cycle) {
            cout << "Cycle is Present" << endl;
            return;
        }
    }

    cout << "Cycle is not Present" << endl;
}

int main(){
     
    //  CycleDetectionDFS();
     CycleDetectionBFS();
    return 0;

}