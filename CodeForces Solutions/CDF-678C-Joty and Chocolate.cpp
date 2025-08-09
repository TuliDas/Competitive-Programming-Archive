/*
Problem Name : CDF-678C-Joty and Chocolate
Problem Link : https://codeforces.com/contest/678/problem/C
Language     : C++
Verdict      : ACCEPTED
Solved On    : Jun/18/2016
*/

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
long long maximum(long long a, long long b)
{

    if(a>b) return a;
    return b;
}
long long factor(long long a, long long b)
{

    return (long long) (a*b)/__gcd(a,b);
}
int main()
{

    long long n, a, b, p, q;
    cin>>n>>a>>b>>p>>q;

    long long totalChocklate = 0;
    long long temp1, temp2, temp3;
    temp1 = (n/a);
    temp2 = (n/b);
    temp3 = (n/factor(a,b));



    totalChocklate  = (temp1-temp3)*p;
    totalChocklate += (temp2-temp3)*q;
    totalChocklate +=  temp3*maximum(p,q);

    cout<<totalChocklate<<endl;

}
