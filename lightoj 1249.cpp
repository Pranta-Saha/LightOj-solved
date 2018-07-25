#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=0;

    cin>>t;

    int n,i,a,b,c,mx,tmp;  string str;
    map<int,string>mp;
    map<int,string>::iterator it;


    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++)
        {
            cin>>str>>a>>b>>c;
            mp[a*b*c]=str;
        }

        if(mp.size()==1)
        {
            cout<<"Case "<<++cs<<": no thief"<<endl;
        }
        else
        {
            it=mp.end(); it--;
            cout<<"Case "<<++cs<<": "<<it->second<<" took chocolate from "<<mp.begin()->second<<endl;

        }

        mp.clear();

    }

    return 0;
}
