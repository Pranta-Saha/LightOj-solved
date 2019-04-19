#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);


vector<int>adj[1005];
bool visited[1002];
int total_count[1002];

void DFS(int prnt)
{
        visited[prnt]=1;
        total_count[prnt]++;
        for(auto child: adj[prnt])
                if(visited[child]==0)
                        DFS(child);
}

int main()
{
        int n,i,j,t,tcs=0,k,m,u,v;
        cin>>t;
        while(t--)
        {
                for(i=0;i<1002;i++) adj[i].clear(),total_count[i]=0;
                cin>>k>>n>>m;
                vector<int>people;
                for(i=0;i<k;i++)
                {
                        cin>>j;
                        people.push_back(j);
                }
                while(m--)
                {
                        cin>>u>>v;
                        adj[u].push_back(v);
                }
                for(auto p: people)
                {
                        memset(visited,0,sizeof visited);
                        DFS(p);
                }
                int cnt=0;
                for(i=1;i<=n;i++)
                        if(total_count[i]==k)
                                cnt++;
                cout<<"Case "<<++tcs<<": "<<cnt<<endl;
        }
	return 0;
}
