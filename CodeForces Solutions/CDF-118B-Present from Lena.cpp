/*
Problem Name : CDF-118B-Present from Lena
Problem Link : https://codeforces.com/problemset/problem/118/B
Vjudge.net   : https://vjudge.net/problem/CodeForces-118B
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-12-10
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    {
        int sp,temp,num,tt,len;
        sp=n;


        for(int i=0;i<=n;i++)
        {
            temp=sp;
            while(temp--)
                cout<<"  ";
            sp--;
            num=0;
            for(int j=0;j<=i;j++)
            {
                if(j==0 && i==0)
                cout<<num;

               else
                cout<<num<<" ";
                num++;
            }
            num -=2;
            for(int j=0;j<i;j++)
            {
                if(num==0)
                    cout<<num;
                else
                cout<<num<<" ";
                num--;
            }
           //cout<<"aa";
            cout<<endl;

        }
        sp=1;
        len=n-1;

        for(int i=len;i>=0;i--)
        {
            temp=sp;
            while(temp--)
                cout<<"  ";
            sp++;

           num=0;
            for(int j=0;j<=len;j++)
              {
                  if(len==0)
                    cout<<num;
                  else
                  cout<<num<<" ";
                  num++;
              }
              num-=2;

              for(int j=0;j<len;j++)
              {
                 if(num==0)
                    cout<<num;
                 else
                  cout<<num<<" ";
                  num--;
              }
              //
            // cout<<"a a";
              len--;
              cout<<endl;
        }
    }
}
