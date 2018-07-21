#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  arr[101];
    int t=0,tt;
    cin>>tt;

    while((++t)<=tt)
    {
        memset(arr,0,100);

        int n,m,D,Y,Z,K,i,j;

        cin>>n>>m;

        for(i=0;i<n;i++)
            cin>>arr[i];
        valarray<int>mainn(arr,n);

        char comand;

        for(j=1;j<=m;j++)
        {
            cin>>comand;

            if(comand=='S'||comand=='M'||comand=='D')
            {
                cin>>D;
                valarray<int>tmp(D,n);
                if(comand=='S') mainn+=tmp;
                else if(comand=='M') mainn*=tmp;
                else if(comand=='D') mainn/=tmp;
            }
            else if(comand=='R')
            {
                for(i=0;i<(n/2);i++)
                    swap(mainn[i],mainn[n-i-1]);
            }
            else if(comand=='P')
            {
                cin>>Y>>Z;
                swap(mainn[Y],mainn[Z]);
            }
        }
        cout<<"Case "<<t<<":"<<endl;
        for(i=0;i<n;i++)
        {
            if(i==(n-1)) cout<<mainn[i]<<endl;
            else cout<<mainn[i]<<" ";
        }

    }


    return 0;
}
