#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,entry=0;

    int arr[101][101];

    cin>>n;

    for(i=n;i>=1;i--)
    {
        k=0;

        for(j=i;j<=n;j++)
        {
            arr[++k][j]= ++entry;
        }
    }

    for(i=2;i<=n;i++)
    {
        k=0;
        for(j=i;j<=n;j++)
        {
            arr[j][++k]= ++entry;
        }
    }



    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
