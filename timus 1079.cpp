#include<bits/stdc++.h>
using namespace std;

int arr[100000];

int fun(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;

    if(arr[n]!=0) return arr[n];

    if((n%2)==0)  return fun(n/2);
    return fun(n/2)+fun((n/2)+1);

}

int main()
{
    int n,mx=INT_MIN,i;

    arr[1]=1; 

    for(i=99999;i>=2;i--)
       if(arr[i]==0)
            arr[i]=fun(i);

    for(i=1;i<=99999;i++)
    {
        arr[i]=max(arr[i-1],arr[i]);
    }
    cin>>n;

    while(n!=0)
    {
        cout<<arr[n]<<endl;
        cin>>n;
    }

    return 0;
}
