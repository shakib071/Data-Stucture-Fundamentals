#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool vis[1001][1001];
int dis[1001][1001];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
char a[1001][1001];
pair<int,int>par[1001][1001];
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    par[si][sj]=make_pair(si,sj);
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        int aa = p.first, bb = p.second;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int ci = aa + d[i].first;
            int cj = bb + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false && a[ci][cj]!='#')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[aa][bb] + 1;
                par[ci][cj] =make_pair(aa,bb);
            }
        }
    }
}
vector<char>path;
void pathprint(int ai,int aj,int bi,int bj){
    int ti=bi,tj=bj;
    // cout<<ai<<" "<<aj<<endl;
    while(1){
         if(ti==ai && tj==aj) break;
      int pi=par[ti][tj].first;
      int pj=par[ti][tj].second;
    //   cout<<pi<<" "<<pj<<endl;
      if(pi==ti && pj<tj){
        path.push_back('R');
      }
      else if(pi==ti && pj>tj){
        path.push_back('L');
      }
      else if(pj==tj && pi<ti){
        path.push_back('D');
      }
      else path.push_back('U');
   
      ti=pi;
      tj=pj;
    }
}

int main(){
     
 ios::sync_with_stdio(0);cin.tie(0);
    fill(&par[0][0],&par[0][0]+1001*1001,make_pair(-1,-1));
    int ai,aj,bi,bj;
     cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if(a[i][j]=='A'){
                ai=i;
                aj=j;
            }
            if(a[i][j]=='B'){
                bi=i;
                bj=j;
            }
        }
    }

    // cout<<ai<<" "<<aj<<" "<<bi<<" "<<bj<<endl;
   
   
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));
    bfs(ai, aj); 
    // cout<<par[bi][bj].first<<par[bi][bj].second<<endl;
    if(dis[bi][bj]!=-1){
        cout<<"YES"<<endl;
        cout<<dis[bi][bj]<<endl;
        pathprint(ai,aj,bi,bj);
        // cout<<path.size()<<endl;
        for(int i=path.size()-1;i>=0;i--){
            cout<<path[i];
        }
        cout<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
    
     
    return 0;

}