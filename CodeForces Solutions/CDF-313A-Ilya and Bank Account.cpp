/*
Problem Name : CDF-313A-Ilya and Bank Account
Problem Link : https://codeforces.com/problemset/problem/313/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/05/2016
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ba;
    while(cin>>ba)
    {
        int md1,md2,ca;

        if(ba<0)
            ca=(-1)*ba;
        else
            ca=ba;

        md1=ca%10;
        md2=(ca/10)%10;

        if(ba<0)
        {
            if(ba>-100)
            {
                if(md1==0 || md2==0)
                    cout<<"0"<<endl;
                else {
                if(md1<md2)
                cout<<"-"<<md1<<endl;
                else
                    cout<<"-"<<md2<<endl;
                }

            }
            else
            {

                if(md1<md2)
                    cout<<"-"<<ca/100<<md1<<endl;
                else
                    cout<<"-"<<ca/100<<md2<<endl;
            }

        }
        else
        {
            cout<<ba<<endl;

        }

    }
    return 0;
}
