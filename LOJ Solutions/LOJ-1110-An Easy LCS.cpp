/*
DP - Iterative
Problem Name : LOJ-1110-An Easy LCS
Problem Link : https://lightoj.com/problem/an-easy-lcs
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-05-31
*/

#include<bits/stdc++.h>
using namespace std;
#define LL long long int
#define mx 111

LL dp[mx][mx];
string res[mx][mx];
string s1,s2;

void calc_LCS(LL n,LL m)
{

   for(LL i=0;i<=n+1;i++)
   {
       dp[i][0]=0;
       res[i][0]="";
   }
    for(LL i=0;i<=m+1;i++)
   {
       dp[0][i]=0;
       res[0][i]="";
   }

   for(LL i=1;i<=n;i++)
   {
       for(LL j=1;j<=m;j++)
       {
           if(s1[i-1]==s2[j-1])
           {
               dp[i][j]= dp[i-1][j-1] + 1;
               res[i][j] = res[i-1][j-1]+ s1[i-1];
           }

           else if(dp[i][j-1]>dp[i-1][j])
           {
               dp[i][j]= dp[i][j-1];
               res[i][j] = res[i][j-1];
           }

         else if(dp[i-1][j]>dp[i][j-1])
           {
               dp[i][j]= dp[i-1][j];
               res[i][j] = res[i-1][j];
           }

           else
           {
               dp[i][j]=dp[i][j-1];
               res[i][j]=min(res[i-1][j],res[i][j-1]);

           }

       }
   }

}



int main()
{
    int tc;
    //fstream mf;
    //mf.open("tuli.txt");

    cin>>tc;
    for(int cs=1; cs<=tc; cs++)
    {

        cin>>s1>>s2;
        LL n,m;
        n=s1.size();m=s2.size();
        memset(dp,-1,sizeof(dp));
        calc_LCS(n,m);
        if(dp[n][m]==0){
            cout<<"Case "<<cs<<": :("<<endl;
        }
        else
        {
            cout<<"Case "<<cs<<": "<<res[n][m]<<endl;
        }
    }

}
