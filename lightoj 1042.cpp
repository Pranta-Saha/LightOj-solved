#include "bits/stdc++.h"
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


int main()
{
    int n,t,tt=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string str=decToBinary(n);
        str='0'+str;
        vector<int>vec;

        for(int i=0;i<str.size();i++)
            vec.push_back(str[i]-'0');

        next_permutation(vec.begin(),vec.end());
        str="";

        for(int i=0;i<vec.size();i++)
        {
            str.push_back((char)(vec[i]+'0'));
        }
        cout<<"Case "<<++tt<<": "<<binaryToDecimal(str)<<endl;
    }

	return 0;
}
