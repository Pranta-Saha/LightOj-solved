#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tt;
    cin>>tt;

    for(int t=1;t<=tt;t++)
    {
        unsigned long long n,sqr,prevsqr,pos,tmp;

        cin>>n;

        sqr=(int)sqrt(n);

    //cout<<sqr;

        if(sqr*sqr==n)
        {
            if(sqr&1)
                cout<<"Case "<<t<<": "<<1<<" "<<sqr<<endl;
            else
                cout<<"Case "<<t<<": "<<sqr<<" "<<1<<endl;

            continue;
        }

        sqr++;

        if(sqr%2==0)
        {
            ///now sqr means n in which square

            prevsqr=(sqr-1)*(sqr-1);

            tmp=sqr*sqr;

            unsigned long long fitalen= tmp-prevsqr+1;

            pos=n-prevsqr;

            if(pos==(fitalen/2))
            {
                cout<<"Case "<<t<<": "<<pos<<" "<<pos<<endl;
            }
            else if(pos<(fitalen/2))
            {
                cout<<"Case "<<t<<": "<<pos<<" "<<sqr<<endl;
            }
            else
            {
                cout<<"Case "<<t<<": "<<sqr<<" "<<fitalen-pos<<endl;
            }


        }
        else
        {
            //sqr++;
            ///now sqr means n in which square

            prevsqr=(sqr-1)*(sqr-1);

        //cout<<prevsqr;

            tmp=sqr*sqr;

            unsigned long long fitalen= tmp-prevsqr+1;

        //cout<<fitalen;

            pos=n-prevsqr;

        //cout<<pos;

            if(pos==(fitalen/2))
            {
                cout<<"Case "<<t<<": "<<pos<<" "<<pos<<endl;
            }
            else if(pos<(fitalen/2))
            {
                cout<<"Case "<<t<<": "<<sqr<<" "<<pos<<endl;
            }
            else
            {
                cout<<"Case "<<t<<": "<<fitalen-pos<<" "<<sqr<<endl;
            }
        }
    }



    return 0;
}
