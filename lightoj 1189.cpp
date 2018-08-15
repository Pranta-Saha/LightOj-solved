
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=0;
    cin>>t;
    stack<long long>stk;
    long long n,i,arr[22];arr[0]=1;;

    for(i=1;i<=20;i++)
        arr[i]=arr[i-1]*i;

    while(t--)
    {
        while(!stk.empty()) stk.pop();
        cin>>n;

        for(i=20;i>=0&&n>0;i--)
        {
            if(arr[i]<=n)
            {
                n-=arr[i];
                stk.push(i);
            }
        }



        if(n==0)
        {
            cout<<"Case "<<++cs<<": ";
            while(!stk.empty())
            {
                cout<<stk.top()<<'!';
                stk.pop();
                if(stk.empty()) cout<<endl;
                else cout<<'+';
            }

        }
        else cout<<"Case "<<++cs<<": impossible"<<endl;
    }

    return 0;
}

