#include <bits/stdc++.h>
using namespace std;

class node{
public:
        int attt,w;
        node(int atttt,int wight){attt=atttt; w=wight;}
        node(){}
};

vector<node>adj[30002];
int dist[30004];
bool visited[30004];
int mx,indx;

void bfs(int src)
{
        queue<int>que;
        visited[src]=true;
        que.push(src);
        mx=-1;

        while(!que.empty())
        {
                int prnt=que.front();
                que.pop();
                int sz=adj[prnt].size();
                for(int i=0;i<sz;i++)
                {
                        node x=adj[prnt][i];
                        if(visited[x.attt]==true) continue;
                        visited[x.attt]=true;
                        dist[x.attt]=dist[prnt]+x.w;
                        if(mx<dist[x.attt])
                        {
                                mx=dist[x.attt];
                                indx=x.attt;
                        }
                        que.push(x.attt);
                }
        }
}

int main()
{
        int n,i,j=0,t;
        scanf("%d",&t);
        while(t--)
        {
                for(i=0;i<=30000;i++) {adj[i].clear();dist[i]=0;visited[i]=0;}
                scanf("%d",&n);
                for(i=0;i<n-1;i++)
                {
                        int u,v,w;
                        scanf("%d%d%d",&u,&v,&w);
                        adj[u].push_back(node(v,w));
                        adj[v].push_back(node(u,w));
                }
                bfs(0);
                for(i=0;i<=30000;i++) { dist[i]=0;visited[i]=0;}
                bfs(indx);
                printf("Case %d: %d\n",++j,mx);
        }
	return 0;
}
