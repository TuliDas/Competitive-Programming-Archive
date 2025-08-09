/*
Problem Name : CDF-719A-Vitya in the Countryside
Problem Link : https://codeforces.com/contest/719/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/23/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[100];
    while(cin>>n)
    {
        if(n==1)
        {
            cin>>a[0];
            if(a[0]==15)
            cout<<"DOWN"<<endl;
            else if(a[0]==0)
                cout<<"UP"<<endl;

            else cout<<"-1"<<endl;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                cin>>a[i];
            }

            if(a[n-1]-a[n-2]==1)
            {
                if(a[n-1]<15)
                cout<<"UP"<<endl;
                else cout<<"DOWN"<<endl;
            }
            else
            {
                if(a[n-1]!=0)
                    cout<<"DOWN"<<endl;
                else cout<<"UP"<<endl;
            }

        }
    }

}
 
