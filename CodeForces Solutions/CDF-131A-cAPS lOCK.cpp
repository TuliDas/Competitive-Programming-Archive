/*
Problem Name : CDF-131A-cAPS lOCK
Problem Link : https://codeforces.com/contest/131/problem/A
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/20/2016
*/

#include<bits/stdc++.h>
using namespace std;
string s;
bool check(int test)
{
    if(test==s.size())
        return true;


    if(islower(s[0]) && test==s.size()-1)
        return true;


    return false;
}
int main()
{

    while(cin>>s)
    {
        int test=0;
        for(int i=0; i<s.size(); i++)
        {
            if(isupper(s[i]))
                test++;

        }
        if(check(test))
        {
            for(int i=0; i<s.size(); i++)
            {
                if(islower(s[i]))
                {
                    s[i]=toupper(s[i]);
                    cout<<s[i];
                }

                else
                {
                    s[i]=tolower(s[i]);
                    cout<<s[i];
                }
            }

        }
        else
            cout<<s;

        cout<<endl;
    }

}
 
