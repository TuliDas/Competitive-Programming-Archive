// Problem Name : UVA 11614 - Etruscan Warriors Never Play Chess
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2661
// Vjudge.net  	: https://vjudge.net/problem/UVA-11614
// Verdict      : Accepted
// Language     : C++11
// Solved on    : 2016-11-05


#include<bits/stdc++.h>
using namespace std;


int main()
{

int tc;
scanf("%d",&tc);
while(tc--)
{
    long long n,ans;
    scanf("%lld",&n);
    ans = (sqrt((4*2*n)+1) -1 ) / 2;
    cout<<ans<<endl;

}
return 0;
}
