/*
DP
Problem Name : LOJ-1047-Neighbor House
Problem Link : https://lightoj.com/problem/neighbor-house
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2018-05-26
*/


#include<bits/stdc++.h>
using namespace std;
int row;
int build[100][100],dp[100][100];

int rec(int r,int c)
{
    if(r==row) return 0;

    if(dp[r][c]!=-1) return dp[r][c];

    dp[r][c] = 10000000000;

    if(r==0)
        for(int i=0; i<3; i++)
        {
            dp[r][c] = min(dp[r][c] ,(build[r][i] + rec(r+1,i)));

        }
    else
    {
        for(int i=0; i<3; i++)
        {
            if(i!=c)
                dp[r][c] = min(dp[r][c] ,(build[r][i] + rec(r+1,i)));
        }
    }
    return dp[r][c];

}


int main()
{

    int tc,kase=1;
    cin>>tc;
    while(tc--)
    {
        memset(dp,-1,sizeof(dp));
        cin>>row;

        for(int i=0; i<row; i++)
        {
            for(int j=0; j<3; j++)
                cin>>build[i][j];
        }
        cout<<"Case "<<kase++<<": "<<rec(0,0)<<endl;
    }
}
