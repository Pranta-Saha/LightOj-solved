#include<bits/stdc++.h>
using namespace std;

char arr[25][25];
int cnt=1;

void dfs(int i, int j)
{
    if(arr[i][j+1]=='.')
    {
        cnt++;
        arr[i][j+1]='#';
        dfs(i,j+1);
    }
    if(arr[i][j-1]=='.')
    {
        cnt++;
        arr[i][j-1]='#';
        dfs(i,j-1);
    }
    if(arr[i+1][j]=='.')
    {
        cnt++;
        arr[i+1][j]='#';
        dfs(i+1,j);
    }
    if(arr[i-1][j]=='.')
    {
        cnt++;
        arr[i-1][j]='#';
        dfs(i-1,j);
    }
}


int main()
{
    int testcase;

    cin>>testcase;
    int tc2=testcase;

    while(testcase--)
    {
        cnt=1;
        memset(arr,'a',sizeof(arr));
        int c,r,startingR,startingC;
        char tmp;

        cin>>c>>r;

        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                cin>>tmp;
                if(tmp=='@')
                {
                    startingR=i; startingC=j;
                    arr[i][j]='#';
                }
                arr[i][j]=tmp;

            }
        }

        dfs(startingR,startingC);
        cout<<"Case "<<(tc2-testcase)<<": "<<cnt<<endl;
    }

}
