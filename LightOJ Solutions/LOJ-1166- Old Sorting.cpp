/*
Problem Name : LOJ-1166- Old Sorting
Problem Link : https://lightoj.com/problem/old-sorting
Vjudge.net   : https://vjudge.net/problem/LightOJ-1166
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2016-12-09
*/

#include<bits/stdc++.h>
using namespace std;
map <int,int> mp;
int main()
{
    int tc,kase=1,n,ara[105];
    cin>>tc;
    while(tc--)
    {
        int cnt=0;
        mp.clear();
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            mp[ara[i]]=i;
        }
        int test=0,index;
        for(int i=0;i<n;i++)
        {
            test++;
            //cout<<"Test "<<test<<endl;
            if(ara[i]!=test)
            {
                cnt++;
               index= mp[test];

               ara[index]=ara[i];
               mp[ara[i]]=index;
                ara[i]=test;
               /* cout<<"array : "<<endl;
                for(int i=0;i<n;i++)
                    cout<<ara[i]<<" ";
                cout<<endl;*/

            }

        }
        cout<<"Case "<<kase++<<": "<<cnt<<endl;

    }
}
