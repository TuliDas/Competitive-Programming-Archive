// Problem Name : UVA 10699 - Count the factors
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1640
// Vjudge Link  : https://vjudge.net/problem/UVA-10699
// Verdict      : Accepted
// Language     : C++ 4.8.2
// Solved on    : 2016-05-28 (on Viudge)

#include <bits/stdc++.h>
using namespace std;

bool prime[1000000];
void Sieve(int n)
{

    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }

}
int main()
{
    int n,cnt,i,j,t;
    vector<int> v;
    t=1000000;
    Sieve(t);

    for(i=1;i<=1000000;i++)
    {
        if(prime[i]==true)
        {
            v.push_back(i);
        }
    }



    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }

        cnt=0;

        for(i=2;i<=n;i++)
        {
            if(n%i==0 && prime[i]==true)
            {
                cnt++;
            }
        }
        cout<<n<<" : "<<cnt<<'\n';
    }
    return 0;
}
