/*
Problem Name : CDF-GYM-101845H-Happy Birthday UN
Problem Link : https://codeforces.com/gym/101845/problem/H
Vjudge.net   : https://vjudge.net/problem/Gym-101845H
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
#define M 10000
map<int,int> mp;

int check(int year)
{
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    else
        return 0;
}


void precalculate()
{
    mp[1867] = 2 ;

    for(int i= 1868; i<=12000 ; i++)      //
    {
        int ret = check(i);
        if(ret==1)
        {
           // cout<<i<<" is a leap year"<<endl;
            mp[i] = mp[i-1] + 2;
            //cout<<mp[i]<<endl;
        }
        else
        {
            mp[i] = mp[i-1] + 1;

        }
        if(mp[i]>7)
            mp[i] = mp[i]-7;
    }
}

int main()
{
    //freopen("input.txt",r,stdin);
    mp.clear();
    precalculate();

   // while(1)
    {
        int n;
        cin>>n;

        int temp=mp[n+1867];
        if(temp==1)
        {
            cout<<"Saturday"<<endl;
        }
        else if(temp==2)
        {
            cout<<"Sunday"<<endl;
        }
        else if(temp==3)
        {
            cout<<"Monday"<<endl;
        }
        else if(temp==4)
        {
            cout<<"Tuesday"<<endl;
        }
        else if(temp==5)
        {
            cout<<"Wednesday"<<endl;
        }
        else if(temp==6)
        {
            cout<<"Thursday"<<endl;
        }
        else if(temp==7)
        {
            cout<<"Friday"<<endl;
        }
    }
}
