#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,i,x,t,tt=0;

    cin>>t;

    while(t--)
    {
        int cnt=0,sum=0;

        cin>>n;
        while(n--)
        {
            cin>>x;
            if(x>0) cnt++;
            sum+=abs(x);
        }

        if(cnt==0) cout<<"Case "<<++tt<<": inf"<<endl;
        else
        {
            for(i=cnt;i>=1;i--)
            {
                if(cnt%i==0 && sum%i==0) {cout<<"Case "<<++tt<<": "<<sum/i<<"/"<<cnt/i<<endl; break;}
            }
        }

    }

	return 0;
}
