/*
Problem Name : LOJ-1045-Digits of Factorial
Problem Link : https://lightoj.com/problem/digits-of-factorial
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-12
*/

#include<bits/stdc++.h>
using namespace std;

double L[1000002];

void precalculate()
{
    L[0] = 0;

    for(int i=1; i<=1000000; i++)
    {
        L[i] = L[i-1] + log10(i);
    }
}

int main()
{
    //freopen("input.txt", "r", stdin);
    precalculate();

    int Test, kase = 0;
    cin>>Test;
    int n, base;
    while(Test--)
    {
        scanf("%d %d", &n, &base);
        int realAns;
        if(n==0)
        {
            realAns = 1;
        }
        else
        {
            double ansInDouble = L[n]/log10(base);
            realAns = ceil(ansInDouble);
        }
        //cout<<realAns<<endl;
        printf("Case %d: %d\n",++kase,realAns);
    }

    return 0;

}

