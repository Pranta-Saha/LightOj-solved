#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);
int arr[1003];
vector<int>adj[1003];
bool visited[1003];
int total,average,tmpcnt,tmptotal;

void DFS(int prnt)
{
        visited[prnt]=1;
        tmpcnt++;
        tmptotal+=arr[prnt];
        for(auto child: adj[prnt])
                if(visited[child]==0)
                        DFS(child);
}

int main()
{
        int n,i,j,t,tcs=0,k,m,u,v;
        scanf("%d",&t);
        while(t--)
        {
                total=0;
                scanf("%d%d",&n,&m);
                for(i=1;i<=n;i++)
                {
                        visited[i]=0;
                        scanf("%d",&arr[i]);
                        adj[i].clear();
                        total+=arr[i];
                }

                while(m--)
                {
                        scanf("%d%d",&u,&v);
                        adj[u].push_back(v);
                        adj[v].push_back(u);
                }
                average=total/n;
                int flag=0;// 1 for impossible;
                if(total!=average*n) flag=1;

                for(i=1;i<=n;i++)
                {
                        if(flag==1) break;
                        if(visited[i]==1) continue;
                        tmpcnt=tmptotal=0;
                        DFS(i);
                        if(tmpcnt*average!=tmptotal) flag=1;
                }
                if(flag==0)
                        printf("Case %d: Yes\n",++tcs);
                else
                        printf("Case %d: No\n",++tcs);
        }
	return 0;
}
