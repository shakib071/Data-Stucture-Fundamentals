#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
vector<int>level(1005,-1);
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
        cout << par << endl;
        for (int child : v[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child]=level[par]+1;
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
    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    bfs(src);
    return 0;
}