/*
Problem Name : CDF-710A-King Moves
Problem Link : https://codeforces.com/contest/710/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/05/2016
*/

#include<bits/stdc++.h>
using namespace std;


int MiniBfs(int x,int y)
{
    int a,b,result;
    result=0;
    int dx[]={1,1,0,-1,-1,-1,0,1};
    int dy[]={0,1,1,1,0,-1,-1,-1};

    for(int i=0;i<8;i++)
    {
        a=x+dx[i];
        b=y+dy[i];
        if((a<=8 && a>=1) && (b<=8 && b>=1))
            result++;
    }
    return result;
}
int main()
{
    string s;
    while(cin>>s)
    {
        int x,y,r;
        x = s[0] -'a' + 1;
        y=s[1]-'0';
        r=MiniBfs(x,y);
        cout<<r<<endl;

    }
    return 0;
}
 
