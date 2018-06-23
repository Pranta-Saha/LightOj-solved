#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,tt;
    cin>>tt;
    for(t=1;t<=tt;t++)
    {
        int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y;

        cin>>n>>m;

        x=max(m,n); y=min(m,n);

        if(y==1) cnt=x;
        else if(y==2)
        {
            cnt=4*(x/4);
            if(x%4==1) cnt+=2;
            else if(x%4==2||x%4==3) cnt+=4;
        }
        else cnt=(x*y+1)>>1;

        cout<<"Case "<<t<<": "<<cnt<<endl;
    }
    return 0;
}
