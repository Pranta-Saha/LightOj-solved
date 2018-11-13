#include<bits/stdc++.h>
using namespace std;

unsigned long long phii[5000006];
bool mark[5000006];

void sievephi()
{
    int i,j;
    for(i=1;i<=5000001;i++) phii[i]=i;
    phii[1]=1; mark[1]=true; phii[0]=0;
    for(i=2;i<=5000001;i++)
    {
        if(!mark[i])
        {
            for(j=i;j<=5000001;j+=i)
            {
                mark[j]=1;
                phii[j]=phii[j]/i*(i-1);
            }

        }

    }

}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int i,j,t,tt=0,a,b;
    sievephi();
    for(i=1;i<=5000000;i++)
    {
        phii[i] = phii[i-1]+ (phii[i]*phii[i]);
    }

    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        printf("Case %d: %llu\n",++tt,(phii[b]-phii[a-1]));
    }
	return 0;
}
