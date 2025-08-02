// Problem Name	: UVA 417 - Word Index
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=358
// Vjudge.net  	: https://vjudge.net/problem/UVA-417
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2017-03-26

#include<bits/stdc++.h>
using namespace std;
map <string,int> mp;
queue <string> q;

void bfs()
{
    while(!q.empty())
        q.pop();
    int indx=1;
    string str;
    str="";
    for(char ch='a'; ch<='z'; ch++)
    {
        str=ch;
        mp[str]=indx++;
        q.push(str);
    }

    while(!q.empty())
    {
        string sfront;
        sfront=q.front();
        q.pop();

        if(sfront.size()>=5)
            continue;

        char lastchar;
        lastchar= sfront[sfront.size()-1];
        for(char ch=lastchar+1; ch<='z'; ch++)
        {
            str= sfront+ch;
            mp[str]=indx++;
            q.push(str);
        }
    }
}




bool isValid(string str)
{
    for(int i=1; i<str.size(); i++)
    {
        if(str[i]<=str[i-1])
            return false;
    }
    return true;
}
int main()
{
    bfs();
    string str;
    while(cin>>str)
    {
        if(isValid(str))
        {
            cout<<mp[str]<<endl;

        }
        else
            cout<<"0"<<endl;
    }
}
