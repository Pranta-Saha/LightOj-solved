#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y,t,tt,sum(0);

    double r,re;

    cin>>tt;

    for(t=1;t<=tt;t++)
    {
        cin>>r;

        re=(((4.0)-(2*acos(0.0)))*r*r);

        cout<<"Case "<<t<<": ";

        printf("%.2f\n",re);
    }

    return 0;
}
