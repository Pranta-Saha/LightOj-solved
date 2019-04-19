#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

vector<int>adj[20004];
bool visited[20004];
int color[20004];

int bfs(int src)
{
        queue<int>que;
        que.push(src);
        visited[src]=1;
        color[src]=1;
        int cnt1=1,cnt2=0;

        while(!que.empty())
        {
                int prnt=que.front();
                que.pop();
                for(auto child:adj[prnt])
                {
                        if(visited[child]) continue;
                        visited[child]=1;
                        if(color[prnt]==1) color[child]=2,cnt2++;
                        else color[child]=1,cnt1++;
                        que.push(child);
                }
        }
        return max(cnt1,cnt2);
}

int main()
{
        int n,i,j,t,tcs=0;
        scanf("%d",&t);
        while(t--)
        {
                for(i=0;i<=20000;i++) adj[i].clear(),visited[i]=0,color[i]=0;
                set<int>st;
                scanf("%d",&n);
                int u,v;
                while(n--)
                {
                        scanf("%d%d",&u,&v);
                        adj[u].push_back(v);
                        adj[v].push_back(u);
                        st.insert(u);
                        st.insert(v);
                }
                int total_max=0;
                for(auto tmp:st)
                {
                        if(visited[tmp]==0)
                                total_max+=bfs(tmp);
                }
                printf("Case %d: %d\n",++tcs,total_max);
        }
	return 0;
}
