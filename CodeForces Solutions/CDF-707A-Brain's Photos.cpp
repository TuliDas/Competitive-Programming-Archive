/*
Problem Name : CDF-707A-Brain's Photos
Problem Link : https://codeforces.com/contest/707/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/05/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c,r;
    while(cin>>r>>c)
    {
        int check=0;
        char a;

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>a;
                if(a=='M' || a=='C' || a=='Y')
                    check=1;
            }
        }
        if(check==0)
            cout<<"#Black&White"<<endl;
        else
            cout<<"#Color"<<endl;
    }
    return 0;
}
