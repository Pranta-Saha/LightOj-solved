
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=0;

    cin>>t;

    int n,i,a,b,c,mx,tmp;

    double arr[1000002]; arr[1]=0;

    for(i=2;i<=1000000;i++)
        arr[i]=arr[i-1]+log((double)i);


    while(t--)
    {
        int disit=0;
        cin>>n>>b;

        if(n==0||n==1)
        {
            cout<<"Case "<<++cs<<": "<<1<<endl;
            continue;
        }

        if(n==2)
        {
            while(n)
            {
                disit++;
                n=n/b;
            }
            cout<<"Case "<<++cs<<": "<<disit<<endl;
            continue;
        }

        disit = floor(arr[n]/log((double)b)) + 1;

        cout<<"Case "<<++cs<<": "<<disit<<endl;
    }

    return 0;
}

