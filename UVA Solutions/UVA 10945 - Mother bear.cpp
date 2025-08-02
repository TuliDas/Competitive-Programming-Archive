/*
Problem Name	: UVA 10945 - Mother bear
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1886
Vjudge.net  	: https://vjudge.net/problem/UVA-10945
Language	    : C++11
Solved on   	: 2017-04-15
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,ss,sss;
    while(1)
    {
        getline(cin,s);
        ss="";

        if(s=="DONE")
            break;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='.' || s[i]==',' || s[i]=='?' || s[i]=='!' || s[i]==' ')
                continue;
            else ss= s[i]+ss;
        }
        transform(ss.begin(),ss.end(),ss.begin(),::tolower);


      sss=ss;
   reverse(sss.begin(),sss.end());
   if(ss==sss)
        cout<<"You won't be eaten!"<<endl;
else
         cout<<"Uh oh.."<<endl;

    }
}
