#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
#define FRO freopen("in.txt","r",stdin);

string grid[11];
int xx[4]={0,1,0,-1};
int yy[4]={1,0,-1,0};
int n;
int chkOK(pii a)
{
        return 0<=a.first && a.first<n && 0<=a.second && a.second<n ;
        return 0;
}

int BFS(pii src, char dest)
{
        queue<pii>que;
        que.push(src);
        map<pii,int>dist;
        dist[src]=0;
        grid[src.first][src.second]='.';

        while(!que.empty())
        {
                pii prnt=que.front();
                que.pop();
                pii child;
                for(int i=0;i<4;i++)
                {
                        child.first=prnt.first+xx[i];
                        child.second=prnt.second+yy[i];
                        if(chkOK(child)==0 || dist.find(child)!=dist.end() ) continue;
                        if(grid[child.first][child.second]==dest) {grid[child.first][child.second]='.'; return dist[prnt]+1;}
                        if(grid[child.first][child.second]!='.') continue;

                        dist[child]=dist[prnt]+1;
                        que.push(child);
                }

        }
        return -1;
}

int main()
{
        int i,j,t,tcs=0;
        cin>>t;
        while(t--)
        {
                cin>>n;
                map<char,pii>mp;
                for(i=0;i<n;i++)
                {
                        cin>>grid[i];
                        for(j=0;j<n;j++)
                                if(grid[i][j]!='.' && grid[i][j]!='#')
                                        mp[grid[i][j]]={i,j};
                }
                map<char,pii>::iterator it=mp.end(); it--;
                char endd=it->first;
                int moves=0,flag=0;
                for(it=mp.begin();it!=mp.end();)
                {
                        if(it->first==endd) break;
                        int x=it->second.first, y=it->second.second;
                        it++;
                        int tmp=BFS({x,y},it->first);
                        if(tmp==-1) {flag=1; break;}
                        moves+=tmp;
                }
                if(flag==1) cout<<"Case "<<++tcs<<": "<<"Impossible"<<endl;
                else cout<<"Case "<<++tcs<<": "<<moves<<endl;
        }



	return 0;
}
