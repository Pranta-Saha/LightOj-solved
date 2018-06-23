#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,m,i=0,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y,t=0,tt,sum(0),w;

    cin>>tt;
    while((++t)<=tt)
    {
        cin>>w;

        if(w&1) {cout<<"Case "<<t<<": "<<"Impossible"<<endl; continue;}

        i=1;
        while((w&1)==0)
        {
            //cout<<i<<" ";
            w=w>>1; i=i<<1;
        }

        cout<<"Case "<<t<<": "<<w<<" "<<i<<endl;
    }

    return 0;
}
