#pragma GCC diagnostic warning "-std=c++11"
#include<bits/stdc++.h>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp/10;
        dec_value += last_digit*base;
        base = base*2;
    }
    return dec_value;
}

int stooi(string str)
{
    int tmp=0;
    int len=str.size();

    for(int i=0;i<len;i++)
    {
        tmp+=((str[i]-'0')*pow(10,(len-i-1)));
    }
    //cout<<" #"<<tmp;
    return tmp;

}

int main()
{
    int t,cs=0;
    cin>>t;

    int arr[4],cnt,chk;
    char str1[101],str2[101];
    string str;
    char *token;

    while(t--)
    {

        memset(arr,0,4); cnt=0; chk=0;

        cin>>str1>>str2;

        token = strtok(str1,".");
        while(token!=NULL)
        {
            str= token;
            arr[cnt++]=stooi(str);

            token=strtok(NULL,".");
        }


        cnt=0;
        token = strtok(str2,".");
        while(token!=NULL)
        {
            str=token;
            if(arr[cnt++]!=binaryToDecimal(stooi(str))) chk=1;

            token=strtok(NULL,".");
        }


        cout<<"Case "<<++cs<<": "<<(chk?"No":"Yes")<<endl;
    }

    return 0;
}
