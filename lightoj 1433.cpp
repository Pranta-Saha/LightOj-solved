#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0,tt;

    cin>>tt;

    while((++t)<=tt)
    {
        double ox,oy,ax,ay,bx,by,am,bm,fi1,fi2,r,ab,re;

        cin>>ox>>oy>>ax>>ay>>bx>>by;

        r=sqrt(((ox-ax)*(ox-ax))+((oy-ay)*(oy-ay)));

        ab=sqrt(((bx-ax)*(bx-ax))+((by-ay)*(by-ay)));

        fi1=acos(1-(.5*(ab/r)*(ab/r)));

        re=r*fi1; //cout<<r<<" "<<fi1<<" ";

        cout<<"Case "<<t<<": "<<fixed<<setprecision(9)<<re<<endl;
    }

    return 0;
}
