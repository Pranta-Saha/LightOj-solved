#include<bits/stdc++.h>
using namespace std;

bool chkbound(char r,char c)
{
    return ( 'a'<=r && r<='h' && '1'<=c && c<='8' );
    return 0;
}

int main()
{
    int t;
    cin>>t;

    int xx[8]={1,2,2,1,-1,-2,-2,-1};
    int yy[8]={2,1,-1,-2,-2,-1,1,2};

    while(t--)
    {
        int i,j,cnt=0;
        char r,c;
        cin>>r>>c;

        cnt=0;
        for(i=0;i<=7;i++)
        {
            if(chkbound(r+xx[i],c+yy[i])) cnt++;
        }
        cout<<cnt<<endl;
    }


    return 0;
}
