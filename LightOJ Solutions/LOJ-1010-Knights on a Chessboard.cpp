/*
Problem Name : LOJ-1010-Knights on a Chessboard
Problem Link : https://lightoj.com/problem/knights-on-chessboard
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-13
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,kase=1;
    scanf("%d",&n);
    while(n--)
    {
        int m,n,ans;
        scanf("%d %d",&m,&n);

        if(m==1 || n==1)
        {
            ans=max(m,n);
        }

        else if(m==2 && n==2)
            ans=4;

        else if(m==2 || n==2)
        {
            double temp;
            int t=max(m,n);
            temp= (double) t;
            //cout<<"t = "<<t<<". temp = "<<temp<<endl;
            //cout<<(ceil(temp-1)/4)*2<<" == temp1"<<endl;

            ans= ceil(temp/4) *2 + ceil((temp-1)/4)*2;

        }

        else
        {
             double M,N;
            M= (double)m;
            N=(double)n;
           ans= ceil((M*N)/2.0);
        }


            printf("Case %d: %d\n",kase++,ans);

    }
}
