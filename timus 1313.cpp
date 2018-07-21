#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k;
    int arr[101][101];

    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=1;i<=n;i++)
    {
        k=0;
        for(j=i;j>=1;j--)
        {
            k++;
            cout<<arr[j][k]<<" ";
        }
    }

    for(i=2;i<=n;i++)
    {
        k=-1;
        for(j=i;j<=n;j++)
        {
            k++;
            cout<<arr[n-k][j]<<" ";
        }
    }


    return 0;
}
