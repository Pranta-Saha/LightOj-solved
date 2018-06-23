#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int tmp;
        cin>>tmp;

        cout<<tmp/2<<" "<<((tmp/2)+(tmp%2))<<endl;
    }


    return 0;
}
