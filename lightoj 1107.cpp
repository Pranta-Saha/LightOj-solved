#include<bits/stdc++.h>
using namespace std;

int x1,y1,x2,y2;

bool chkbound(int x,int y)
{
    return (x1<x && y1<y && x<x2 && y<y2);
    return 0;
}

int main()
{
    int n,x,y,t,tt;

    cin>>tt;

    for(t=1;t<=tt;t++)
    {
        cin>>x1>>y1>>x2>>y2;

        cout<<"Case "<<t<<":"<<endl;

        cin>>n;
        while(n--)
        {
            cin>>x>>y;

            if(chkbound(x,y)) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}
