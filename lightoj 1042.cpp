#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;
    int base = 1;
    int len = num.length();
    for (int i=len-1;i>=0;i--)
    {
        if (num[i] == '0')
        {
            dec_value += 0*base;
            base = base * 2;
        }
        else
        {
            dec_value += 1*base;
            base = base * 2;
        }
    }
    return dec_value;
}

// function to convert decimal to binary string form
string decToBinary(int n)
{
    string str="";
    int i = 0;
    while (n > 0) {
        if(n%2)
            str+='1';
        else
            str+='0';
        n = n / 2;
    }

    reverse(str.begin(),str.end());

    return str;
}

int onoroy(int n)
{
    int cnt0=0,j,k;
    string str=decToBinary(n);
    size_t len=str.size();
    size_t ptr1=str.find('0'),ptr;

    if(__builtin_popcount(n)==len)
        str.insert(str.begin()+1,'0');
    else
    {

        if( str.find('1',ptr1)==string::npos)
        {
            str.insert(str.begin()+1,'0');
                //cout<<"#"<<str;
            len=str.size();
            for(k=2;k<len;k++)
                if(str[k]=='0')
                    cnt0++;
            for(k=2;k<=1+cnt0;k++)
                str[k]='0';
            for(k;k<len;k++)
                str[k]='1';

        }
        else
        {

            ptr=str.rfind("1");
            for(j=ptr;j>=0;j--)
            {
                if(str[j]=='0')
                {
                    str[j]='1';
                    str[ptr]='0';

                    for(k=j+1;k<len;k++)
                        if(str[k]=='0')
                            cnt0++;
                    for(k=j+1;k<=j+cnt0;k++)
                        str[k]='0';
                    for(k;k<len;k++)
                        str[k]='1';
                    break;
                }
            }
        }

    }



return binaryToDecimal(str);

}

int main()
{
    int t,cs=0;

    cin>>t;

    int n,i,a,b,c,mx,tmp;

    while(t--)
    {
        cin>>n;


        cout<<"Case "<<++cs<<": "<< onoroy(n)<<endl;
    }

    return 0;
}
