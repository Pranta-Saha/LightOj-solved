
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=0;

    cin>>t;

    int n,i,a,b,c,mx,tmp;

    while(t--)
    {
        int my,lft;
        cin>>my>>lft;

        cout<<"Case "<<++cs<<": "<< (abs(my-lft)+my)*4 + 19 <<endl;
    }

    return 0;
}

