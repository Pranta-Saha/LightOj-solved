#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y,t=0,tt,sum(0),tmp,lo,hi,mid,mx,mn;

    double r1,r2,r3,H,h,h2,p,V,v,res;

    cin>>tt;

    while((++t)<=tt)
    {
        cin>>r1>>r2>>h>>p;

        H= h*r1; H=H/(r1-r2);

        h2=H-h+p;

        r3=r1*h2; r3=r3/H;

        res=1.0/3.0;

        res=res*2.0*acos(0.0)*( (r3*r3*h2)-(r2*r2*(H-h)) );

        cout<<"Case "<<t<<": ";
        printf("%.8f\n",res);

    }

    return 0;
}
