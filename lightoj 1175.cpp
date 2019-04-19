#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);

string grid[202];
int R,C,Jans_i,Jans_j;
int ii[4]={0,1,0,-1};
int jj[4]={1,0,-1,0};
int dist[202][202];
int jans_dist[202][202];

bool chkbnd(pii a) { return 0<=a.first && a.first<R && 0<=a.second && a.second<C; }

int Bfs_for_jan(pii src)
{
        jans_dist[src.first][src.second]=0;
        if(dist[src.first][src.second]==0) return -1;
        int visited[202][202];
        memset(visited,0,sizeof visited);
        visited[src.first][src.second]=1;
        queue<pii>que;
        que.push(src);

        while(!que.empty())
        {
                pii prnt=que.front();
                que.pop();
                for(int i=0;i<4;i++)
                {
                        pii child;
                        child.first=prnt.first+ii[i];
                        child.second=prnt.second+jj[i];
                        if(chkbnd(child)==0) return jans_dist[prnt.first][prnt.second]+1;
                        if(visited[child.first][child.second]==1) continue;
                        if(grid[child.first][child.second]=='#') continue;
                        if(dist[child.first][child.second]>=jans_dist[prnt.first][prnt.second]+2)
                        {
                                visited[child.first][child.second]=1;
                                jans_dist[child.first][child.second]=jans_dist[prnt.first][prnt.second]+1;
                                que.push(child);
                        }
                }
        }
        return -1;
}

void BFS(pii src)
{
        dist[src.first][src.second]=0;
        int visited[202][202];
        memset(visited,0,sizeof visited);
        visited[src.first][src.second]=1;
        queue<pii>que;
        que.push(src);

        while(!que.empty())
        {
                pii prnt=que.front();
                que.pop();
                for(int i=0;i<4;i++)
                {
                        pii child;
                        child.first=prnt.first+ii[i];
                        child.second=prnt.second+jj[i];
                        if(chkbnd(child)==0) continue;
                        if(visited[child.first][child.second]==1) continue;
                        if(grid[child.first][child.second]=='#') continue;
                        if(dist[child.first][child.second] >= dist[prnt.first][prnt.second]+2)
                        {
                                visited[child.first][child.second]=1;
                                dist[child.first][child.second]=dist[prnt.first][prnt.second]+1;
                                que.push(child);
                        }
                }
        }
}




int main()
{
        int n,i,j,t,tcs=0,k,m,u,v;
        cin>>t;
        while(t--)
        {
                for(i=0;i<=200;i++)
                {
                        for(j=0;j<=200;j++)
                        {
                                dist[i][j]=1e8;
                        }
                }
                cin>>R>>C;
                vector<pii>fires;
                for(i=0;i<R;i++)
                {
                        cin>>grid[i];
                        for(j=0;j<C;j++)
                        {
                                if(grid[i][j]=='J') {Jans_i=i; Jans_j=j;}
                                else if(grid[i][j]=='F') fires.push_back({i,j});
                        }
                }
                for(auto x: fires)
                        BFS(x);

                int ans=Bfs_for_jan({Jans_i,Jans_j});
                if(ans==-1) cout<<"Case "<<++tcs<<": IMPOSSIBLE"<<endl;
                else cout<<"Case "<<++tcs<<": "<<ans<<endl;
        }

	return 0;
}


