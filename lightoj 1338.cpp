#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=0;

    cin>>t;

    int n,i,a,b,c,mx,tmp,chk;

    string str,str2;  getline(cin,str);

    while(t--)
    {
        chk=0;

        getline(cin,str);
        getline(cin,str2);

        int len1,len2;
        len1=str.size();
        len2=str2.size();

        for(i=0;i<str.size();i++)
            if(str[i]==' ')
            {
                str.erase(i,1);
                i--;
            }
            else
                str[i]=tolower(str[i]);


        for(i=0;i<str2.size();i++)
            if(str2[i]==' ')
            {
                str2.erase(i,1);
                i--;
            }
            else
                str2[i]=tolower(str2[i]);

        len1=str.size();
        len2=str2.size();

        if(len1<len2)
        {
            for(i=0;i<len1;i++)
            {
                tmp=str2.find(str[i]);

                if(str2.find(str[i])==string::npos) chk=1;
                else str2.erase(tmp,1);

            }
        }
        else
        {
            for(i=0;i<len2;i++)
            {
                tmp=str.find(str2[i]);

                if(str.find(str2[i])==string::npos) chk=1;
                else str.erase(tmp,1);

            }

        }





        if(chk==1)
            cout<<"Case "<<++cs<<": No"<<endl;
        else
            cout<<"Case "<<++cs<<": Yes"<<endl;

    }

    return 0;
}
