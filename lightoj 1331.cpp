#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0,tt;

    cin>>tt;

    while((++t)<=tt)
    {
        double r1,r2,r3,a,b,c,A,B,C,pi,Tarea,ARCarea,res;

        cin>>r1>>r2>>r3;

        a=r1+r2;
        b=r2+r3;
        c=r3+r1;

        A=acos(((b*b)+(c*c)-(a*a))/(2.0*b*c));
        B=acos(((a*a)+(c*c)-(b*b))/(2.0*a*c));
        C=acos(((a*a)+(b*b)-(c*c))/(2.0*a*b));

        double s=(a+b+c)*.5;

        Tarea=sqrt(s*(s-a)*(s-b)*(s-c));

        ARCarea=(A*r3*r3*.5)+(B*r1*r1*.5)+(C*r2*r2*.5);

        res=Tarea-ARCarea;

        cout<<"Case "<<t<<": "<<fixed<<setprecision(9)<<res<<endl;


    }
    return 0;
}
