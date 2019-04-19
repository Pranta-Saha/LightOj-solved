
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);


set<string>forbiden;
string start,finish,a,b,c;

void make_forbiden()
{
        int sza=a.size(),szb=b.size(),szc=c.size();
        string ss="aaa";
        for(int i=0;i<sza;i++)
        {
                ss[0]=a[i];
                for(int j=0;j<szb;j++)
                {
                        ss[1]=b[j];
                        for(int k=0;k<szc;k++)
                        {
                                ss[2]=c[k];
                                forbiden.insert(ss);
                        }
                }
        }


}


int BFS()
{
        set<string>visited;
        map<string,int>dist;
        queue<string>que;

        if(forbiden.find(start)!=forbiden.end() || forbiden.find(finish)!=forbiden.end() )
                return -1;
        if(start==finish) return 0;
        visited.insert(start);
        que.push(start);
        dist[start]=0;

        while(!que.empty())
        {
                string prnt=que.front();
                que.pop();
                string child;
                for(int i=0;i<3;i++)
                {
                        child=prnt;
                        if(prnt[i]=='z') child[i]='a';
                        else child[i]=char(prnt[i]+1);
                        if(forbiden.find(child)!=forbiden.end()) continue;
                        if(visited.find(child)!=visited.end()) continue;
                        if(child==finish) return dist[prnt]+1;
                        dist[child]=dist[prnt]+1;
                        visited.insert(child);
                        que.push(child);
                }
                for(int i=0;i<3;i++)
                {
                        child=prnt;
                        if(prnt[i]=='a') child[i]='z';
                        else child[i]=char(prnt[i]-1);
                        if(forbiden.find(child)!=forbiden.end()) continue;
                        if(visited.find(child)!=visited.end()) continue;
                        if(child==finish) return dist[prnt]+1;
                        dist[child]=dist[prnt]+1;
                        visited.insert(child);
                        que.push(child);
                }
        }
        return -1;
}


int main()
{
        ll n,i,j,t,tcs=0;
        cin>>t;
        while(t--)
        {
                forbiden.clear();
                cin>>start>>finish>>n;
                while(n--)
                {
                        cin>>a>>b>>c;
                        make_forbiden();

                }
        cout<<"Case "<<++tcs<<": "<<BFS()<<endl;
        }
	return 0;
}
