/*
Problem Name : CDF-GYM-101853D-Balloons
Problem Link : https://codeforces.com/gym/101853/problem/D
Vjudge.net   : https://vjudge.net/problem/Gym-101853D
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2018-08-16
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

int main()
{
    //freopen("input.txt",r,stdin);
    int tc;
    cin>>tc;
    int n,ara[25];
    while(tc--)
    {
        cin>>n;
        int cnt=0;

        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]!=0) cnt++;
        }
        cout<<cnt<<endl;
    }


}

