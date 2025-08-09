/*
Problem Name : CDF-GYM-257183H-Hour for a Run
Problem Link : https://codeforces.com/gym/257183/problem/H
Language     : C++
Verdict      : ACCEPTED
Solved On    : Oct/22/2019
*/

#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<assert.h>
//#include<unordered_map>
//#include<unordered_set>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>
using namespace std;
#define lead_zero(x)    __builtin_clzll(x)
#define trail_zero(x)   __builtin_ctz(x)
#define total_1s(x)     __builtin_popcount(x)
#define ll long long int
#define pi 3.14159265358979323846
#define filein freopen("input.txt", "r", stdin)


int main()
{
    int v,n;
    scanf("%d%d",&v,&n);
    vector< long long int>r;
    long long int a[]= {10,20,30,40,50,60,70,80,90};
    for(int i=0; i<9; i++)
    {
        long long int x=v*n*a[i];

        if(x%100==0)
        {
            long long int k=x/100;
            r.push_back(k);
        }
        else
        {
            long long int k=x/100;
            r.push_back(k+1);
        }

    }
    for(int i=0; i<r.size()-1; i++)
    {
        printf("%lld ",r[i]);
    }
    //cout<<endl;
    printf("%lld\n",r[8]);
    //cout<<endl;


}
