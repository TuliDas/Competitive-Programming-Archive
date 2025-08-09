/*
Problem Name : CDF-712B-Memory and Trident
Problem Link : https://codeforces.com/contest/712/problem/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/11/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    map<char,int> mp;
    while(cin>>s)
    {
        mp.clear();
        int L=0,R=0,U=0,D=0,edit=0,length,extra,a,b;
        length=s.size();
        if(length%2!=0)
            cout<<"-1"<<endl;
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                mp[s[i]]++;
            }
            L = mp['L'];
            U = mp['U'];
            D = mp['D'];
            R = mp['R'];


            if(L<R)
                swap(L,R);

            if(U<D)
                swap(U,D);


            edit=(L-R)/2;
            extra=(L-R)%2;

            edit=edit+ (extra+(U-D))/2;
            cout<<edit<<endl;
        }
    }
    return 0;
}
