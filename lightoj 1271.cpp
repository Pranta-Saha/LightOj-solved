
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);

vector<int>adj[50004];
stack<int>way;
bool visited[50004];
int prnts[50004];

void BFS(int src,int dst)
{
        prnts[src]=src;
        visited[src]=1;
        queue<int>que;
        que.push(src);

        while(!que.empty())
        {
                int prnt=que.front();
                que.pop();

                for(auto child: adj[prnt])
                        if(visited[child]==0)
                        {
                                visited[child]=1;
                                prnts[child]=prnt;
                                if(child==dst) return;
                                que.push(child);
                        }
        }



}

int main()
{
        int n,i,j,t,tcs=0,k,m,u,v,src,dst;
        scanf("%d",&t);
        while(t--)
        {
                for(i=1;i<50002;i++)
                        adj[i].clear(),visited[i]=0,prnts[i]=0;
                printf("Case %d:\n",++tcs);
                scanf("%d",&n);
                scanf("%d",&u);  src=u;
                for(i=1;i<n;i++)
                {
                        scanf("%d",&v);
                        adj[u].push_back(v);
                        adj[v].push_back(u);
                        u=v;
                }
                for(i=0;i<=50000;i++)
                        sort(adj[i].begin(),adj[i].end());
                dst=u;
                BFS(src,dst);
                while(prnts[dst]!=dst)
                {
                        way.push(dst);
                        dst=prnts[dst];
                } way.push(dst);
                while(!way.empty())
                {
                        printf("%d",way.top());
                        way.pop();
                        if(!way.empty()) printf(" ");
                }
                printf("\n");
        }


	return 0;
}
