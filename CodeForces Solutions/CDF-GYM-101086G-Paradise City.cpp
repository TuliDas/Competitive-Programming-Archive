/*
Problem Name : CDF-GYM-101086G-Paradise City
Problem Link : https://codeforces.com/gym/101086/problem/G
Language     : C++
Verdict      : ACCEPTED
Solved On    : May/15/2018
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[5];
    long long int tc,n,col_b,col_e,ans,cnt;
    scanf("%lld",&tc);
    while(tc--)
    {
        scanf("%lld",&n);
        ans=0;

        for(int i=0;i<3;i++)
          cin>>s[i];

        col_b=0;
        col_e=2;
        for(int t=1;t<=n;t++)
        {
           cnt=0;
           for(int r=0;r<=2;r++)
           {
               for(int c=col_b;c<=col_e;c++)
               {
                  if(s[r][c]=='*')
                    cnt++;
               }
           }
           cnt*=4;
           ans= max(ans,cnt);
           col_b+=3;
           col_e+=3;
        }
      cout<<ans<<endl;
    }
}
