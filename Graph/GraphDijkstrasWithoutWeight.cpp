//Dijstras Algoritm without weight
//single source sortest path algorithm
//pathPrinting
#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
vector<int>level(1005,-1);
vector<int>parent(1005,-1);
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src]=0;
    //level track rakhbe
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        // cout << par << endl;
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child]=level[par]+1;
                parent[child]=par;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src,des;//source and destination
    cin >> src>>des;
    memset(vis, false, sizeof(vis));
    bfs(src);
    int x=des;
    vector<int>v;
    while(x!=-1){
    //  cout<<x<<" ";
    v.push_back(x);
     x=parent[x];
    
    }
    reverse(v.begin(),v.end());
    for(auto val : v){
        cout<<val<<" ";
    }
    return 0;
}