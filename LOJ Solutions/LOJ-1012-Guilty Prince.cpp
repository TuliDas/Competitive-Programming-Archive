/*
Problem Name : LOJ-1012-Guilty Prince
Problem Link : https://lightoj.com/problem/guilty-prince
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016
*/

#include<bits/stdc++.h>
using namespace std;

int T,col,row,color[25][25];
int dx[]={0,-1,0,1};
int dy[]={1,0,-1,0};
int cnt;
string s[20+5];

queue <int> q;

bool valid(int x,int y)
{
     if(x<0) return false;
    if(y<0) return false;
    if(x>=row) return false;
    if(y>=col) return false;

    return true;
}

int bfs(int x,int y)
{
    cnt=0;
    q.push(x);
    q.push(y);
    color[x][y]=1;
    while(!q.empty())
    {
        x= q.front();
        q.pop();
        y= q.front();
        q.pop();



        int X,Y;
        for(int k=0;k<4;k++)
        {
            X=x+dx[k];
            Y=y+dy[k];


            if(valid(X,Y) == false)
                continue;



            if(s[X][Y]== '.' && color[X][Y]==0)
            {

                q.push(X);
                q.push(Y);
                color[X][Y]=1;
            }
        }
        cnt++;
        color[x][y] = 2;
    }

    return cnt;
}
int main()
{
    int ans,Case=0;
    cin>>T;
    while(T--)
    {
        memset(color,0,sizeof(color));

        cin>>col>>row;
        for(int i=0;i<row;i++)
        {
            cin>>s[i];
        }

        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(s[i][j]=='@')
                ans=bfs(i,j);

            }
        }
        cout<<"Case "<<++Case<<": "<<ans<<endl;
    }

}
