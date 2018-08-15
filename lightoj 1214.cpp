#include<bits/stdc++.h>
using namespace std;

int main()
{
      int t,cs=0;
      cin>>t;
      long long n,i,b,c,mx,tmp;
      string a;

      while(t--)
      {
            cin>>a>>b;  tmp=0;
            i = (a[0]=='-')?1:0;
            b=abs(b);
            int len=a.size();

            for(i;i<len;i++)
            {
                 tmp=tmp*10 + (a[i]-'0');
                 tmp%=b;
            }

            if(tmp==0)
                  cout<<"Case "<<++cs<<": "<<"divisible"<<endl;
            else
                  cout<<"Case "<<++cs<<": "<<"not divisible"<<endl;
      }
      return 0;
}


