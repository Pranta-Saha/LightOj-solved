#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y,t=0,tt,sum(0),tmp,lo,hi,mid,mx,mn;

    cin>>tt;

    while((++t)<=tt)
    {
        double v1,v2,v3,a1,a2,d,time,birdd;

        cin>>v1>>v2>>v3>>a1>>a2;

        d=((v1*v1)/(2.0*a1))+((v2*v2)/(2.0*a2));

        birdd=max((v1/a1),(v2/a2))*v3;

        cout<<"Case "<<t<<": "<<fixed<<setprecision(8)<<d<<" "<<fixed<<setprecision(8)<<birdd<<endl;

    }

    return 0;
}
