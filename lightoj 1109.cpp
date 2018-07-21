#include<bits/stdc++.h>
using namespace std;

struct entry
{
    int d,n;
};

struct comp
{
    bool operator()(const entry& x, entry& y)
    {
        if(x.d==y.d)
            return (x.n < y.n) ;
        else
            return (x.d > y.d);
    }
};


void SieveOfEratosthenes(unsigned long long n, bool prime[],
                         bool primesquare[], unsigned long long a[])
{

    for (unsigned long long i = 2; i <= n; i++)
        prime[i] = true;
    for (unsigned long long i = 0; i <= (n * n + 1); i++)
        primesquare[i] = false;
    prime[1] = false;
    for (unsigned long long p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (unsigned long long i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }
    unsigned long long j = 0;
    for (unsigned long long p = 2; p <= n; p++) {
        if (prime[p]) {
            a[j] = p;
            primesquare[p * p] = true;
            j++;
        }
    }
}

// Function to count divisors
unsigned long long countDivisors(unsigned long long n)
{
    if (n == 1)
        return 1;
    bool prime[n + 1], primesquare[n * n + 1];
    unsigned long long a[n];
    SieveOfEratosthenes(n, prime, primesquare, a);
    unsigned long long ans = 1;
    for (unsigned long long i = 0;; i++) {
        if (a[i] * a[i] * a[i] > n)
            break;
        unsigned long long cnt = 1;
        while (n % a[i] == 0)
        {
            n = n / a[i];
            cnt = cnt + 1;
        }
        ans = ans * cnt;
    }
    if (prime[n])
        ans = ans * 2;
    else if (primesquare[n])
        ans = ans * 3;
    else if (n != 1)
        ans = ans * 4;
    return ans;
}

int main()
{
    priority_queue<entry,vector<entry>, comp> pq;

    vector<unsigned long long>vec; vec.push_back(0);

    for(unsigned long long i=1;i<=1000;i++)
    {
        entry tmp;
        tmp.n=i;
        tmp.d=countDivisors(i);
        pq.push(tmp);
    }

    while(!pq.empty())
    {
        vec.push_back(pq.top().n);
        pq.pop();

    }

    int t=0,tt;
    cin>>tt;

    while((++t)<=tt)
    {
        int n;
        cin>>n;
        cout<<"Case "<<t<<": "<<vec[n]<<endl;
    }

    return 0;

}
