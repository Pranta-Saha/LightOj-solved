#include <bits/stdc++.h>
using namespace std;

vector<int>factors[1005];

#define SIZE_N 1005//max 1e8
#define SIZE_P 1005

bool flag[SIZE_N+5];
int primes[SIZE_P+5];
int smallest_prime_factor[SIZE_N+1];

int seive()
{
        int i,j,total=0,val;
        for(i=2;i<=SIZE_N;i++) flag[i]=1;
        val=sqrt(SIZE_N)+1;
        for(i=2;i<val;i++)
                if(flag[i]){
                        for(j=i;j*i<=SIZE_N;j++){
                                if(flag[i*j])
                                {
                                        flag[i*j]=0;
                                        smallest_prime_factor[i*j]=i;
                                }
                        }
                }
        for(i=2;i<=SIZE_N;i++)
                if(flag[i])
                        {primes[total++]=i; smallest_prime_factor[i]=i;}
        return total;
}

//CALL saive before calling this
void generatePrimeFactors(int N)
{
        int NN=N;
    int curr = smallest_prime_factor[N];
    int cnt = 1;
    while (N > 1)
    {
        N /= smallest_prime_factor[N];
        if (curr == smallest_prime_factor[N])
        {
            cnt++;
            continue;
        }
        factors[NN].push_back(curr);
        curr = smallest_prime_factor[N];
        cnt = 1;
    }
    //cout<<N<<" ";
}

bool visited[1005];
int dist[1005];

int bfs(int src, int terget)
{
        queue<int>que;
        visited[src]=1;
        que.push(src);

        while(!que.empty())
        {
                int prnt=que.front();
                que.pop();
                for(auto child:factors[prnt])
                {
                        child+=prnt;
                        if(child>terget) break;
                        if(visited[child]==1) continue;
                        visited[child]=1;
                        dist[child]=dist[prnt]+1;
                        if(child==terget) return dist[child];
                        que.push(child);
                }
        }
        return -1;
}

int main()
{

        int n,i,j,t,tcs=0;
        t=seive();
        for(i=3;i<=1003;i++) { generatePrimeFactors(i);}

        scanf("%d",&t);
        while(t--)
        {
                for(i=0;i<1003;i++) visited[i]=0,dist[i]=0;
                cin>>i>>j;
                if(i==j) printf("Case %d: %d\n",++tcs,0);
                else if(i>j || flag[i]==1 || i<4) printf("Case %d: %d\n",++tcs,-1);
                else printf("Case %d: %d\n",++tcs,bfs(i,j));
        }
	return 0;
}
