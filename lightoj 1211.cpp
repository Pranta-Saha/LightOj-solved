#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y,z,t=0,tt,sum(0),tmp,lo,hi,mid,mx,mn;

    cin>>tt;

    while((++t)<=tt)
    {
        int x1,y1,z1,x2,y2,z2,n;

        cin>>n;

        int mnx=INT_MAX,mny=INT_MAX,mnz=INT_MAX,mxx=INT_MIN,mxy=INT_MIN,mxz=INT_MIN;

        while(n--)
        {
            cin>>x1>>y1>>z1>>x2>>y2>>z2;

            mnx=min(mnx,x2);
            mny=min(mny,y2);
            mnz=min(mnz,z2);

            mxx=max(mxx,x1);
            mxy=max(mxy,y1);
            mxz=max(mxz,z1);
        }

        int res=(mnx-mxx)*(mny-mxy)*(mnz-mxz);

        cout<<"Case "<<t<<": "<<max(0,res)<<endl;
    }

    return 0;
}
