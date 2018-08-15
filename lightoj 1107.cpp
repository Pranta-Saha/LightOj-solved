
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=0;

    cin>>t;

    int n,i,a,b,c,mx,tmp;

    while(t--)
    {
        cout<<"Case "<<++cs<<":"<<endl;
        int x1,y1,x2,y2,x,y;
        cin>>x1>>y1>>x2>>y2;

        cin>>n;

        while(n--)
        {
            cin>>x>>y;
            if(x1<x && x<x2 && y1<y &&y<y2 )
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;

        }



    }

    return 0;
}
