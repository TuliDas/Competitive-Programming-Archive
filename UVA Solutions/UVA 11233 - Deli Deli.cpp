// Problem Name: UVA 11233 - Deli Deli
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2174
// Vjudge.net  	: https://vjudge.net/problem/UVA-11233
// Verdict: Accepted
// Language: C++
// Solved on: 2016-11-13

#include<bits/stdc++.h>
using namespace std;
map <string,string> mp;
queue <string> q;

int con(char a)
{
    if(a=='a' || a=='e' || a=='i' ||  a=='o' || a=='u')
        return 0;

    return 1;

}

int check(string s)
{
    int p= s.size();

    if(s[p-1]=='x' || s[p-1]=='o' || s[p-1]=='s')
        return 1;
    if(s[p-2]=='s' && s[p-1]=='h')
        return 1;

    if(s[p-2]=='c' && s[p-1]=='h')
        return 1;

    return 0;
}
int main()
{
    int n,l;
    while(cin>>n>>l)
    {
        while(!q.empty())
            q.pop();
        mp.clear();
        string s1,s2,s;
        for(int i=0; i<n; i++)
        {
            cin>>s1>>s2;
            mp[s1]=s2;
        }

        for(int i=0; i<l; i++)
        {
            cin>>s;
            if(mp[s]!="")
                q.push(mp[s]);
            else
            {
                int ll=s.size();
                if(s[ll-1]=='y')
                {
                    int r= con(s[ll-2]);
                    if(r)
                    {
                        s[ll-1]='i';
                        s+= "es";
                    }
                        //s = s + "y" + "ies";
                    else
                        s= s+"s";
                }
                else if(check(s))
                {
                    s= s+ "es";

                }
                else
                    s= s+"s";

                //cout<<s;
                q.push(s);




            }
        }

        while(!q.empty())
        {
          cout<<q.front()<<endl;
          q.pop();
        }

    }
}
