/*
Problem Name : CDF-GYM-257183B-Buffoon
Problem Link : https://codeforces.com/gym/257183/problem/B
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
    int n;
    scanf("%d",&n);
    int m=-1;
    int a[n+5];
    for(int i=0;i<n;i++)
    {
        //int x;
        scanf("%d",&a[i]);
        m=max(m,a[i]);

    }
    if(m==a[0])
    {
        printf("S\n");
    }
    else
    {
        printf("N\n");
    }
}
