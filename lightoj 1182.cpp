#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,cnt(0),tmpx,tmpy,xpos,ypos,x,y,t=0,tt,sum(0);

    cin>>tt;

    while((++t)<=tt)
    {
        cin>>n;

        cnt=0;

        for(i=0;i<31;i++)
            if(n&(1<<i)) cnt++;

        //cout<<cnt<<" "<<n<<" ";

        cout<<"Case "<<t<<": "<<((cnt&1)?"odd":"even")<<endl;

    }


    return 0;
}
