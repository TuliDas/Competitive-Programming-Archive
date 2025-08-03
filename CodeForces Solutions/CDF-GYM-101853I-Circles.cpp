/*
Problem Name : CDF-GYM-101853I-Circles
Problem Link : https://codeforces.com/gym/101853/problem/I
Vjudge.net   : https://vjudge.net/problem/Gym-101853I
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2018-08-17
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
//#include<unordered_map>
//#include<unordered_set>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
#define LL long long int
#define pi 3.14159265358979323846
#define root2 sqrt(2)

int main()
{
    //freopen("input.txt",r,stdin);
    double a,b,d;
    int tc;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%lf %lf %lf",&a,&b,&d);
        double sq,C,c,total,r;
        double bahu,t;

        bahu = d / root2;

        r = bahu / 2 ;

        sq = bahu*bahu;

        c = 2 * pi * r *r;

        C = pi * (d/2) * (d/2);

        total = sq + c ;

       printf("%lf\n",total-C);
    }
}
