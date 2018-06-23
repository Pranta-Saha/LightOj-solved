#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,tt,n,m,i,j,cnt(0),tmp,tmpy,xpos,ypos,x,y,sum(0);

    cin>>tt;

    for(t=1;t<=tt;t++)
    {
        sum=0;
        cin>>n;
        while(n--)
        {
            cin>>tmp;
            if(tmp>0) sum+=tmp;
        }
        cout<<"Case "<<t<<": "<<sum<<endl;
    }

    return 0;
}
