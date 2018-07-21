#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,cnt,arr[100],tmp,i;

    int t=0,tt;
    cin>>tt;

    while((++t)<=tt)
    {
        cnt=0; memset(arr,0,50); tmp=0;

        cin>>n>>p>>q;

        for(i=0;i<n;i++) cin>>arr[i];

        for( i=0;(i<p&&i<n);i++)
        {
            tmp+=arr[i];
            if(tmp>q)
            {
                break;
            }
        }



cout<<"Case "<<t<<": "<<i<<endl;
    }


    return 0;
}
