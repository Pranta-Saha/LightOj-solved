#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y,t=0,tt,sum(0),tmp,lo,hi,mid,mx,mn;

    double x1,y1,x2,y2,x3,y3,x4,y4,xm,ym,v;

    cin>>tt;

    while((++t)<=tt)
    {
        cin>>x1>>y1>>x2>>y2>>x3>>y3;

        xm=(x1+x3)/2.0;
        ym=(y1+y3)/2.0;

        x4=(2.0*xm)-x2;
        y4=(2.0*ym)-y2;

        v=0.5*(((x1*y2)+(x2*y3)+(x3*y4)+(x4*y1))-((y1*x2)+(y2*x3)+(y3*x4)+(y4*x1)));

        cout<<"Case "<<t<<": "<<(int)x4<<" "<<(int)y4<<" "<<abs((int)v)<<endl;



    }



    return 0;
}
