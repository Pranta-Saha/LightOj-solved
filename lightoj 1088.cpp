#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;
#define FRO freopen("in.txt","r",stdin);


int main()
{
        int n,i,j,t,tcs=0,k,m,u,v,q;
        scanf("%d",&t);
        while(t--)
        {
                printf("Case %d:\n",++tcs);
                scanf("%d%d",&n,&q);
                vector<int>arr;
                while(n--)
                {
                        scanf("%d",&j);
                        arr.push_back(j);
                }
                while(q--)
                {
                        scanf("%d%d",&i,&j);
                        printf("%d\n",upper_bound(arr.begin(),arr.end(),j)-lower_bound(arr.begin(),arr.end(),i));
                }
        }
	return 0;
}
