/*
Problem Name : CDF-GYM-101853J-Smallest Difference
Problem Link : https://codeforces.com/gym/101853/problem/J
Vjudge.net   : https://vjudge.net/problem/Gym-101853J
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
int ara[10005];
set <int> st;
map <int,int> mp;

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
    int n;
       cin>>n;
       int temp;
       mp.clear();
       st.clear();

       for(int i=0;i<n;i++)
        {
            cin>>temp;
            st.insert(temp);
            mp[temp]++;
        }
        int ans=0;
        set <int> :: iterator it;
        int a,b;

        for(it=st.begin();it!=st.end();it++)
        {
             a = *it;
             b = mp[a] + mp[a+1];
             //if(b>1)
             ans = max(ans,b);
        }
        cout<<ans<<endl;

    }
    //freopen("input.txt",r,stdin);


}

