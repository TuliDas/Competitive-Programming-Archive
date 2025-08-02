/*
Problem Name	: UVA 11713 - Abstract Names
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2760
Language	    : C++11
Solved on   	: 2017-03-15
*/

#include<bits/stdc++.h>
using namespace std;
string s1,s2;
map < char , bool > mp;
int main()
{
    mp.clear();
    mp['a']=true;
    mp['e']=true;
    mp['i']=true;
    mp['o']=true;
    mp['u']=true;
    int tc;

    cin>>tc;
    getchar();
    while(tc--)
    {
        bool flag=true;
        cin>>s1>>s2;
        if(s1.size()!=s2.size())
            flag=false;
        else
        {
            for(int i=0; i<s1.size(); i++)
            {
                if(mp[s1[i]]==false && mp[s2[i]]==false && s1[i]!=s2[i])
                {
                    flag=false;
                    break;
                }
                else if(mp[s1[i]]!=mp[s2[i]])
                       {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;


    }
}
