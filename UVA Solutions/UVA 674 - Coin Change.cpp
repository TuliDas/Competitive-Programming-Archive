// Problem Name	: UVA 674 - Coin Change
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=615
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2018-05-26

#include<bits/stdc++.h>
using namespace std;
map <int,int> mp;
int dp[7][9999],coin[]={1,5,10,25,50};
int tk;

int fun(int i,int amount)
{
    if(i>=5)
    {
        if(amount==tk)
            return 1;
        else
            return 0;
    }

    if(dp[i][amount]!=-1)
        return dp[i][amount];

        int r1=0,r2=0;

    if(amount+coin[i]<=tk)
       r1=fun(i,coin[i]+amount);

    r2 = fun(i+1,amount);
    return dp[i][amount] = r1+r2;


}

int main()
{
    mp.clear();

    for(int i=1;i<=7489;i++)
    {
        memset(dp,-1,sizeof(dp));

         tk=i;
        mp[i]=fun(0,0);
    }
  while(cin>>tk)
  {
    cout<<mp[tk]<<endl;
  }

}

