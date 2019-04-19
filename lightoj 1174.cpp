#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

vector<int>adj[102];
int visited[102];

void bfs(int src, int dist[])
{
        visited[src]=1;
        queue<int>que;
        que.push(src);

        while(!que.empty())
        {
                int prnt=que.front();
                que.pop();
                for(auto child:adj[prnt])
                {
                        if(visited[child]==1) continue;
                        dist[child]=dist[prnt]+1;
                        visited[child]=1;
                        que.push(child);
                }
        }
}

int main()
{
        int n,i,j,t,tcs=0;
        scanf("%d",&t);
        while(t--)
        {
                for(i=0;i<101;i++) adj[i].clear(),visited[i]=0;
                int r,u,v,s,d,distFromSRC[103]={0},DistFromDEST[103]={0};
                scanf("%d%d",&n,&r);
                while(r--)
                {
                        scanf("%d%d",&u,&v);
                        adj[u].push_back(v);
                        adj[v].push_back(u);
                }
                scanf("%d%d",&s,&d);
                bfs(s,distFromSRC);
                memset(visited,0,sizeof visited);
                bfs(d,DistFromDEST);
                int mx=-1;
                for(i=0;i<n;i++)
                        mx=max(mx,distFromSRC[i]+DistFromDEST[i]);

                printf("Case %d: %d\n",++tcs,mx);

        }



	return 0;
}
