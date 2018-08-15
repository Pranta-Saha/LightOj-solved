
#include<cstdio>
using namespace std;

int rev(int n)
{
      int re=0;
      while(n)
      {
            re=re*10+n%10;
            n/=10;
      }
      return re;
}

int main()
{
      int t,cs=0;
      scanf("%d",&t);
      int n,i,a,b,c,mx,tmp;

      while(t--)
      {
            scanf("%d",&n);
            if(n==rev(n))
                  printf("Case %d: Yes\n",++cs);
            else
                  printf("Case %d: No\n",++cs);
      }
      return 0;
}
