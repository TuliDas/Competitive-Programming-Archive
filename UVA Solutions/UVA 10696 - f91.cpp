// Problem Name	: UVA 10696 - f91
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1637
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2017-06-08

#include<bits/stdc++.h>
using namespace std;

long long int f(long long int N)
{
    if(N>=101) return N-10;
    return f(f(N+11));
}
int main()
{
    long long int n;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        cout<<"f91("<<n<<") = "<<f(n)<<endl;
    }
}
