#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y,t=0,tt,sum(0),x1,y1,x2,y2;

    cin>>tt;

    while((++t)<=tt)
    {
        cin>>x1>>y1>>x2>>y2;

        if( ((x1+y1)%2) != ((x2+y2)%2) ) cout<<"Case "<<t<<": "<<"impossible"<<endl;
        else if( ((x1-y1)==(x2-y2)) || ((x1+y1)==(x2+y2)) ) cout<<"Case "<<t<<": "<<1<<endl;
        else cout<<"Case "<<t<<": "<<2<<endl;

    }

    return 0;
}
