// Problem Name    : UVA 439 - Knight Moves
// Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=380
// Verdict	       : Accepted
// Vjudge.net      : https://vjudge.net/problem/UVA-439
// Language	       : C++11
// Solved on   	   : 2016-12-20

#include<bits/stdc++.h>
using namespace std;
map < pair<int,int>, int> mp,temp;
pair<int,int> p;
int color[10][10],ans;

queue <int> q,qq;
int a,b,c,d;
int dx[]= {-1,1,-1,1,-2,-2,2,2};
int dy[]= {-2,-2,2,2,-1,1,1,-1};

bool isvalid(int x,int y)
{
    if(x<1)
        return false;
    if(x>8)
        return false;
    if(y<1)
        return false;
    if(y>8)
        return false;
    return true;
}

int bfs(int x,int y)
{
    while(!q.empty())
        q.pop();

    q.push(x);
    q.push(y);
    int num,ttt;
    ttt=1;
    int cnt=0;
    while(!q.empty())
    {
        num=ttt;
        ttt=0;
        while(num--)
        {
            int w,z;
            w=q.front();
            q.pop();
            z=q.front();
            q.pop();
            p=make_pair(w,z);
            if(w==c && z==d)
            {
                if(mp[p]==0)
                    mp[p]= max(mp[p],cnt);
                else
                    mp[p]=min(mp[p],cnt);
            }
            else
                mp[p]=cnt;

            int xx,yy;
            for(int i=0; i<8; i++)
            {
                xx=w+dx[i];
                yy=z+dy[i];

                if(isvalid(xx,yy)==false)
                    continue;

                if(color[xx][yy]==-1)
                {
                    ttt++;
                    q.push(xx);
                    color[xx][yy]=1;
                    q.push(yy);
                }

            }

        }

        cnt++;
    }

    p=make_pair(c,d);
    return mp[p];

}

int main()
{

    string s1,s2;

    while(cin>>s1>>s2)

    {
        b = s1[0]-'a' +1 ;

        a= s1[1]-'0';
        d= s2[0]-'a'+1;
        c= s2[1]-'0';

        memset(color,-1,sizeof(color));
        mp.clear();
        temp.clear();
        int r;
        if(a==c && b==d)
            r=0;
        else
            r = bfs(a,b);

        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<r<<" knight moves."<<endl;

    }
}

