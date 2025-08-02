// Problem Name	: UVA 10336 - Rank the Languages
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1277
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
char A;
char language[30];
int number[30];
int color[10000][10000];
string board[10000];

int dx[] = {0 , -1, 0, 1};
int dy[] = {1, 0, -1, 0};



bool isValid(int x, int y)
{
    if(x<0) return false;
    if(y<0) return false;
    if(x>=ROW) return false;
    if(y>=COL) return false;

    return true;
}

int doBFS(int x, int y)
{
    queue<int> Q;
    Q.push(x);
    Q.push(y);

    while(!Q.empty())
    {
        x=Q.front();
        Q.pop();
        y=Q.front();
        Q.pop();

        int xx,yy;
        for(int i=0; i<4; i++)
        {
            xx = x + dx[i];
            yy = y + dy[i];

            if(isValid(xx,yy) == false)
                continue;


            if(board[xx][yy]==A && color[xx][yy]==0)
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
    int T,ans,Case=0;
    cin>>T;

    while(T--)
    {
        cin>>ROW>>COL;
        int l=0, n=0;

        for(int i=0; i<ROW; i++)
        {
            cin>>board[i];
        }

        memset(color, 0, sizeof(color));


        cout<<"World #"<<++Case<<endl;

        for(int i=0; i<ROW; i++)
        {
            for(int j=0; j<COL; j++)
            {
                if(board[i][j]<='z' && board[i][j]>='a')
                {
                    A= board[i][j];


                            int cnt=0;
                            for(int h=i; h<ROW; h++)
                            {

                                for(int k=0; k<COL; k++)
                                {

                                    if(board[h][k]==A)
                                    {
                                        cnt++;
                                        doBFS(h,k);

                                    }
                                }
                            }

                            language[l++]=A;
                            number[n++]=cnt;
                            for(int z=0;z<n;z++)
                            {
                                if(number[n-1]==number[z] && language[n-1]<language[z])
                                {
                                    swap(number[n-1],number[z]);
                                    swap(language[n-1],language[z]);
                                }
                            }

                   }
                }
            }
            for(int p=0;p<n;p++)
                cout<<language[p]<<": "<<number[p]<<endl;
        }

    }



