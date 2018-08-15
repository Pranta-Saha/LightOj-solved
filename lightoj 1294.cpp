
#include<cstdio>
using namespace std;

int main()
{
      int t,cs=0;
      scanf("%d",&t);
      unsigned long long n,m,tmp;

      while(t--)
      {
            scanf("%llu%llu",&n,&m);

            tmp=(m*n)/2;

            printf("Case %d: %llu\n",++cs,tmp);
      }
      return 0;
}

