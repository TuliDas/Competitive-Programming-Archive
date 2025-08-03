/*
Problem Name : CDF-GYM-101853F-Working Time
Problem Link : https://codeforces.com/gym/101853/problem/F
Vjudge.net   : https://vjudge.net/problem/Gym-101853F
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

int convert_h(string s)
{
    int h = (s[0]-'0')* 10 + (s[1]-'0');
    return h;
}

int convert_mi(string s)
{
     int mi= (s[3]-'0')* 10 + (s[4]-'0');
     return mi;
}

int main()
{
    //freopen("input.txt",r,stdin);
    int tc;
    int n,m;
    string s1,s2;

    cin>>tc;
    while(tc--)
    {
        int h1,m1,h2,m2;
        int minit=0;
        cin>>n>>m;

        while(n--)
        {
            cin>>s1>>s2;
            h1= convert_h(s1);
            m1= convert_mi(s1);
            h2=convert_h(s2);
            m2= convert_mi(s2);

             minit = minit + (h2-h1)*60;
            minit -=m1;
             minit+=m2;
        }

        minit/=60;
        if(minit>=m)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

}
