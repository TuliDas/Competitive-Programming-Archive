/*
Problem Name : CDF-714C-Sonya and Queries
Problem Link : https://codeforces.com/problemset/problem/714/C
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-09-14
*/

#include<bits/stdc++.h>
using namespace  std;
string makeMyString(string s)
{
    string str = "";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]%2)
        {
            str+="1";
        }
        else
        {
            str+="0";
        }
    }
    while(str.size()!=18)
    {
        str = "0"+str;
    }
    return str;
}
string makeEqual(string s)
{
    string str = s;
    while(str.size()!=18)
    {
        str = "0"+str;
    }
    return str;

}
int main()
{
    int n,test;
    //vector<string> s;
    map<string,int> mp;

    string op,num,ss;
    while(cin>>n)
    {
        //s.clear();
        mp.clear();
        while(n--)
        {

            test=0;
            cin>>op>>num;
            if(op=="+")
                mp[makeMyString(num)]++;
            else if(op=="-")
            {
                mp[makeMyString(num)]--;
            }
            else
            {
                //cout<<"Size ="<<s.size()<<endl;
                cout<<mp[makeEqual(num)]<<endl;
            }
        }
    }
}
