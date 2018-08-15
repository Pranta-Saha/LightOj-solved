#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=0;

    cin>>t;

    long long n,i,j,a,b,c,mx,tmp,rtn,csod;

    while(t--)
    {
        cin>>n;
        rtn=(long long)sqrt((double)n);
        csod=0;

        for(i=2;i<=rtn;i++)
        {
            j=n/i;
            csod+= i*(j-i+1) + j*(j+1)/2 - i*(i+1)/2;
        }

        cout<<"Case "<<++cs<<": "<<csod<<endl;
    }

    return 0;
}

