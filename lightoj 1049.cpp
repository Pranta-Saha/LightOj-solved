#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

vector<int>adj[102];
vector<int>sequence;
vector<bool>visited(102,0);

void DFS(int src)
{
        visited[src]=1;
        sequence.push_back(src);
        for(auto child: adj[src])
                if(visited[child]==0)
                        DFS(child);
}

map<pair<int,int>,int>mp;
int main()
{
        int n,i,j,t,tcs=0;
        cin>>t;
        while(t--)
        {
                for(i=0;i<101;i++) adj[i].clear(),visited[i]=0;
                sequence.clear();
                mp.clear();
                cin>>n; int u,v,c;
                for(i=0;i<n;i++)
                {
                        cin>>u>>v>>c;
                        mp[make_pair(u,v)]=c;
                        adj[u].push_back(v);
                        adj[v].push_back(u);
                }
                DFS(v);
                int mn1=0,mn2=0;
                for(i=0;i<n-1;i++)
                {
                        if(mp.find(make_pair(sequence[i],sequence[i+1])) == mp.end())
                                mn1+=mp[make_pair(sequence[i+1],sequence[i])];
                }
                if(mp.find(make_pair(sequence[n-1],sequence[0]))==mp.end()) mn1+=mp[make_pair(sequence[0],sequence[n-1])];
                for(i=n-1;i>0;i--)
                {
                        if(mp.find(make_pair(sequence[i],sequence[i-1])) == mp.end())
                                mn2+=mp[make_pair(sequence[i-1],sequence[i])];
                }
                if(mp.find(make_pair(sequence[0],sequence[n-1]))==mp.end()) mn2+=mp[make_pair(sequence[n-1],sequence[0])];
                cout<<"Case "<<++tcs<<": "<<min(mn1,mn2)<<endl;
        }


	return 0;

}
