#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define FRO freopen("in.txt","r",stdin);

int m,n;
class Node{
public:
        int x,y;
        Node(){x=0; y=0;}
        Node(int xx,int yy){x=xx; y=yy;}
};

bool chkbound(Node a)
{
        if(0<=a.x && a.x<m && 0<=a.y && a.y<n) return 1;
        return 0;
}

int xx[8]={1,1,2,2,-1,-1,-2,-2}, yy[8]={2,-2,1,-1,2,-2,1,-1};

int total_moves[102][102]={0},presency[102][102]={0};
void BFS(int k, Node src)
{
        queue<Node>que;
        int i,j;
        int dist[102][102]={0};
        bool visited[102][102]={0};
        que.push(src);
        visited[src.x][src.y]=1;
        dist[src.x][src.y]=0;

        while(!que.empty())
        {
                Node prnt=que.front();
                que.pop();

                for(i=0;i<8;i++)
                {
                        Node child;
                        child.x=prnt.x+xx[i];
                        child.y=prnt.y+yy[i];
                        if(chkbound(child)==0 || visited[child.x][child.y]==1) continue;
                        visited[child.x][child.y]=1;
                        que.push(child);
                        dist[child.x][child.y]=dist[prnt.x][prnt.y]+1;
                }
        }
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        if( src.x==i && src.y==j ) presency[i][j]++;
                        else if(dist[i][j]!=0) presency[i][j]++;

                        int tmp=dist[i][j]/k;
                        if(tmp*k != dist[i][j]) tmp++;
                        total_moves[i][j] +=tmp;
                }
        }


}


int main()
{
        int i,j,t,tcs=0;
        cin>>t;
        while(t--)
        {
                memset(total_moves,0,sizeof total_moves);
                memset(presency,0,sizeof presency);
                cin>>m>>n;
                string str[10];
                for(i=0;i<m;i++)
                {
                        cin>>str[i];
                }
                int sirial=0;
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                if(str[i][j]!='.')
                                        BFS(str[i][j]-'0',Node(i,j)),sirial++;
                        }
                }
                int mn=INT_MAX;
                for(i=0;i<m;i++)
                {
                        for(j=0;j<n;j++)
                        {
                                if(presency[i][j]==sirial)
                                        mn=min(mn,total_moves[i][j]);
                        }
                }
                if(mn!=INT_MAX) cout<<"Case "<<++tcs<<": "<<mn<<endl;
                else cout<<"Case "<<++tcs<<": -1"<<endl;
        }



	return 0;
}
