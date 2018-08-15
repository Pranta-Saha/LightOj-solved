
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,cs=0;

    cin>>t;

    int n,i,a,b,c,mx,tmp;

    deque<int>deq;

    while(t--)
    {
          deq.clear();
        cout<<"Case "<<++cs<<":"<<endl;
          int sizee,comands,tmp,nowsize=0;
          cin>>sizee>>comands;
          string comand;

          while(comands--)
          {
                  cin>>comand;
                  if(comand=="pushLeft")
                  {
                        cin>>tmp;
                        if(nowsize==sizee)
                              cout<<"The queue is full"<<endl;
                        else
                        {
                              deq.push_front(tmp);
                              nowsize++;
                              cout<<"Pushed in left: "<<tmp<<endl;
                        }
                  } else if(comand=="pushRight")
                  {
                        cin>>tmp;
                        if(nowsize==sizee)
                              cout<<"The queue is full"<<endl;
                        else
                        {
                              deq.push_back(tmp);
                              nowsize++;
                              cout<<"Pushed in right: "<<tmp<<endl;
                        }

                  } else if(comand=="popLeft")
                  {
                        if(nowsize==0)
                              cout<<"The queue is empty"<<endl;
                        else
                        {
                              tmp=deq.front();
                              deq.pop_front();
                              nowsize--;
                              cout<<"Popped from left: "<<tmp<<endl;
                        }
                  }
                  else
                  {
                        if(nowsize==0)
                              cout<<"The queue is empty"<<endl;
                        else
                        {
                              tmp=deq.back();
                              deq.pop_back();
                              nowsize--;
                              cout<<"Popped from right: "<<tmp<<endl;
                        }
                  }

          }

    }

    return 0;
}
