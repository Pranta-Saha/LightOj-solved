#include <bits/stdc++.h>
using namespace std;

int main()
{
//freopen("in.txt","r",stdin);
    //ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,i,j,t,tt=0;
    cin>>t;

    while(t--)
    {
        double ox,oy,ax,ay,bx,by,cx,cy,dx,dy,area;
        cin>>ax>>ay>>bx>>by>>cx>>cy;
        ox=(ax+cx)/2.0;
        oy=(ay+cy)/2.0;

        dx=(2.0*ox)-bx;
        dy=(2.0*oy)-by;

        area= (ax*by) + (bx*cy) + (cx*dy) + (dx*ay) - (ay*bx) - (by*cx) - (cy*dx) -(dy*ax);


        cout<<"Case "<<++tt<<": "<<(int)dx<<" "<<(int)dy<<" "<<(int)abs(area/2.0)<<endl;

    }


	return 0;
}

