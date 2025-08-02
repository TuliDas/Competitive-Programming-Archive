// Problem Name: UVA 352 - The Seasonal War
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=288
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2016-07-06


#include<iostream>
#include<queue>
#include<string>
#include<string.h>
#include<stdio.h>
using namespace std;

int ROW;
int color[30][30];
string board[30];

int dx[] = {0 , -1, 0, 1,1,-1,-1,1};
int dy[] = {1,  0, -1, 0,1,1,-1,-1};

bool isValid(int x, int y)
{
    if(x<0) return false;
    if(y<0) return false;
    if(x>=ROW) return false;
    if(y>=ROW) return false;

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


            if(board[xx][yy]=='1' && color[xx][yy]==-1)
            {
                Q.push(xx);
                Q.push(yy);
            }
        }
        color[x][y] = 1;
        board[x][y] = '0';


    }

}


int main()
{
    int Case=0;

    while(cin>>ROW)
    {


        for(int i=0;i<ROW;i++)
        {
            cin>>board[i];
        }

        memset(color, -1, sizeof(color));


        int cnt = 0;

        for(int i=0;i<ROW;i++)
        {
            for(int j=0;j<ROW;j++)
            {
                if(board[i][j]=='1')
                {
                    cnt++;
                    doBFS(i,j);
                }
            }
        }
        cout<<"Image number "<<++Case<<" contains "<<cnt<<" war eagles."<<endl;

    }
}

