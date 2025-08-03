/*
Problem Name : CDF-631B-Print Check
Problem Link : https://codeforces.com/problemset/problem/631/B
Vjudge.net   : https://vjudge.net/problem/CodeForces-631B
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-13
*/

#include<bits/stdc++.h>
using namespace std;
int ara[5005][5005];

struct Node
{
    int type;
    int num;
    int color;
};
Node info[100000];


int main()
{
    int n,m,k;


    while(scanf("%d %d %d",&n,&m,&k)==3)
    {

        int test[3][5006],c,t,s;
        memset(ara,0,sizeof(ara));

        for(int i=0; i<k; i++)
        {
            scanf("%d %d %d",&info[i].type,&info[i].num,&info[i].color);
            t=info[i].type;
            s=info[i].num;
            c=info[i].color;
            test[t][s]=i;

            //cout<<"qq t =="<<t<<" s== "<<s<<" c== "<<c<<endl;
        }

        for(int i=0; i<k; i++)
        {
            t=info[i].type;
            s=info[i].num;
            c=info[i].color;

            if(test[t][s]==i)
            {
                // cout<<" t =="<<t<<" s== "<<s<<" c== "<<c<<endl;
                if(t==1 ) //&& row[num[i]]==false)
                {
                    for(int j=0; j<m; j++)
                        ara[s-1][j]=c;

                }
                else
                {
                    for(int j=0; j<n; j++)
                        ara[j][s-1]=c;
                }

            }


        }


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(j)
                    printf(" %d",ara[i][j]);
                else
                    printf("%d",ara[i][j]);
            }
            printf("\n");
        }


    }
}
