/*
Problem Name : CDF-GYM-101808A-Martadella Strikes Again
Problem Link : https://codeforces.com/gym/101808/problem/A
Vjudge.net   : https://vjudge.net/problem/Gym-101808A
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
# define pi 3.14159265358979323846
int main()
{
    //freopen("input.txt",r,stdin);
    int tc;
    cin>>tc;
    while(tc--)
    {
      int R,r;
      cin>>R>>r;
      double a1,a2;
      a1 = pi * R * R;
      a2=  2*pi*r*r ;
      if(a1>a2)
        cout<<"1"<<endl;
      else cout<<"2"<<endl;

    }

}
