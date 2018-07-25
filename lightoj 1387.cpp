
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=0;

    cin>>t;

    int n,i,a,b,c,mx,tmp,total;

    string str;

    while(t--)
    {
        cout<<"Case "<<++cs<<":"<<endl;
        total=0;
        cin>>n;
        while(n--)
        {
            cin>>str;
            if(str=="donate")
            {
                cin>>tmp;
                total+=tmp;
            }
            else cout<<total<<endl;
        }
    }

    return 0;
}
