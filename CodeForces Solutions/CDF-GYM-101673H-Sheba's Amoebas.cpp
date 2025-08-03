/*
Problem Name : CDF-GYM-101673H-Sheba's Amoebas
Problem Link : https://codeforces.com/gym/101673/attachments
Vjudge.net   : https://vjudge.net/problem/Gym-101673H
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2018-03-19
*/

#include<bits/stdc++.h>
using namespace std;
string s[105];
bool visited[105][105],ans;
int dx[]= {1,0,-1,0,1,-1,-1,1};
int dy[]= {0,1,0,-1,1,1,-1,-1};
int r,c,xx,yy;

bool isValid(int xx,int yy)
{
    if(xx<0) return false;
    if(yy<0) return false;
    if(xx>=r) return false;
    if(yy>=c) return false;

    return true;
}

void traverse(int x,int y)
{
    queue<int> q1;
    while(!q1.empty())
        q1.pop();
    q1.push(x);
    q1.push(y);
    s[x][y]='.';
    visited[x][y]=true;

    while(!q1.empty())
    {
        x=q1.front();
        q1.pop();
        y=q1.front();
        q1.pop();


        for(int i=0; i<8; i++)
        {
            xx=x+dx[i];
            yy=y+dy[i];
            if(isValid(xx,yy)==false)
                continue;

            if(s[xx][yy]=='#')
            {
                q1.push(xx);
                q1.push(yy);
                s[xx][yy]='.';
                visited[xx][yy]=true;
            }
        }
    }
}


int doDFS(int x,int y)
{
    int A,B;
    A=x;
    B=y;
    queue<int> q;
    while(!q.empty())
        q.pop();
    q.push(x);
    q.push(y);
    visited[x][y]=true;

    while(!q.empty())
    {
        x=q.front();
        q.pop();
        y=q.front();
        q.pop();
        int cnt=0;
        // cout<<"For "<<x<<","<<y<<"---"<<endl;
        for(int i=0; i<8; i++)
        {
            xx=x+dx[i];
            yy=y+dy[i];
            //cout<<xx<<","<<yy<<endl;

            if(isValid(xx,yy)==false)
                continue;


            if(s[xx][yy]=='#')
                cnt++;
        }

       // cout<<"cnt for "<<x<<","<<y<<" is "<<cnt<<endl;
        if(cnt!=2)
        {
            //cout<<"yes"<<endl;
            traverse(A,B);
            return 0;
        }

        else if(cnt==2)
        {
            for(int i=0; i<8; i++)
            {
                xx=x+dx[i];
                yy=y+dy[i];
                if(isValid(xx,yy)==false)
                    continue;

                if(s[xx][yy]=='#' && visited[xx][yy]==false)
                {
                    visited[xx][yy]=true;
                    q.push(xx);
                    q.push(yy);
                }
            }
        }
    }
    return 1;
}


int main()
{
    int result;
    cin>>r>>c;
    memset(visited,false,sizeof(visited));

    for(int i=0; i<r; i++)
        cin>>s[i];
    result=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(s[i][j]=='#' && visited[i][j]==false)
            {
                result+=doDFS(i,j);
            }
        }
    }
    cout<<result<<endl;

}
