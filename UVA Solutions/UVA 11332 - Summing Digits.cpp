// Problem Name	: UVA 11332 - Summing Digits
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2307
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2016-10-18

#include<bits/stdc++.h>
using namespace std;

int fun(int n)
{
    int s=0;
    while(n!=0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        int sum=0;

        while(n/10!=0)
        {
            n=fun(n);
        }
        cout<<n<<endl;
    }
}
