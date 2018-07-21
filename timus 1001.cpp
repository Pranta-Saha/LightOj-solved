#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    unsigned long long i,j;

    stack<long double>stk;

    while(cin>>j)
    {
        stk.push(sqrt(j));
    }

    while(!stk.empty())
    {
        cout<<fixed<<setprecision(4)<<stk.top()<<endl;
        stk.pop();
    }

    return 0;
}
