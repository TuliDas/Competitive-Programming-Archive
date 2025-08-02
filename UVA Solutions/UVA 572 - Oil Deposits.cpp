// Problem Name	: UVA 572 - Oil Deposits
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=513
// Vjudge.net  	: https://vjudge.net/problem/UVA-572
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2016-07-06


#include<iostream>
#include<queue>
#include<string>
#include<string.h>
#include<stdio.h>
using namespace std;

int ROW, COL;
int color[1000][1000];
string board[1000];

int dx[] = {0 , -1, 0, 1,1,-1,-1,1};
int dy[] = {1,  0, -1, 0,1,1,-1,-1};

bool isValid(int x, int y)
{
    if(x<0) return false;
    if(y<0) return false;
    if(x>=ROW) return false;
    if(y>=COL) return false;

    return true;
}

void doBFS(int x, int y)
{
    queue<int> Q;
    Q.push(x);
    Q.push(y);

    while(!Q.empty())
    {
        x=Q.front(); Q.pop();
        y=Q.front(); Q.pop();

        int xx,yy;
        for(int i=0;i<8;i++)
        {
            xx = x + dx[i];
            yy = y + dy[i];

            if(isValid(xx,yy) == false)
                continue;


            if(board[xx][yy]=='@' && color[xx][yy]==0)
            {
                Q.push(xx);
                Q.push(yy);
            }
        }
        color[x][y] = 1;
        board[x][y] = '*';


    }

}


int main()
{

    while(cin>>ROW>>COL)
    {
        if(ROW==0 || COL==0)
            break;

        for(int i=0;i<ROW;i++)
        {
            cin>>board[i];
        }

        memset(color, 0, sizeof(color));


        int cnt = 0;

        for(int i=0;i<ROW;i++)
        {
            for(int j=0;j<COL;j++)
            {
                if(board[i][j]=='@')
                {
                    cnt++;
                    doBFS(i,j);
                }
            }
        }
        cout<<cnt<<endl;

    }
}

