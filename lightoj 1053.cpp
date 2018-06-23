#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x[3],y,t,tt,sum(0),z;

    cin>>tt;
    for(t=1;t<=tt;t++)
    {
        cin>>x[0]>>x[1]>>x[2];

        sort(x,x+3);

        tmpy= (x[0]*x[0])+(x[1]*x[1]);

        if((x[2]*x[2])==tmpy) cout<<"Case "<<t<<": "<<"yes"<<endl;
        else cout<<"Case "<<t<<": "<<"no"<<endl;

    }

    return 0;
}
