#include<bits/stdc++.h>
using namespace std;

long long int chklp(long long int y)
{
    return y%400==0||(y%4==0 && y%100!=0);
}

int main()
{
    long long int t,cs=0;
    cin>>t;

    long long int n,i,a,b,c,mx,tmp;
    long long int lpcnt1,lpcnt2,lpcnt,year1,year2;
    string month1,month2,day1,day2;

    while(t--)
    {
        lpcnt=0;
        cin>>month1>>day1>>year1;
        cin>>month2>>day2>>year2;

        //day1.erase(day1.size()-1,1);
        if(year1==year2)
        {
            if(chklp(year1) &&  (month1=="February"||month1=="January") && ((month2!="January"&&month2!="February")||(month2=="February"&&day2=="29,"))  )
            {
                cout<<"Case "<<++cs<<": "<<1<<endl;

            }
            else
                cout<<"Case "<<++cs<<": "<<0<<endl;
            continue;
        }

        if(chklp(year1) && (month1=="February"||month1=="January"))
            lpcnt++;
        if(chklp(year2) && ((month2!="January"&&month2!="February")||(month2=="February"&&day2=="29,")))
            lpcnt++;


        year2--;

        lpcnt1=(year1/4)-(year1/100)+(year1/400);
        lpcnt2=(year2/4)-(year2/100)+(year2/400);

        lpcnt+=max((long long int)0,(lpcnt2-lpcnt1));


        cout<<"Case "<<++cs<<": "<<lpcnt<<endl;
    }

    return 0;
}
