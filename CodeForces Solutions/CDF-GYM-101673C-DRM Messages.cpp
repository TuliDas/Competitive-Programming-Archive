/*
Problem Name : CDF-GYM-101673C-DRM Messages
Problem Link : https://codeforces.com/gym/101673/attachments
Vjudge.net   : https://vjudge.net/problem/Gym-101673C
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2018-03-20
*/


#include<bits/stdc++.h>
using namespace std;
map <char,int> mp;
map <int,char> mp2;

int rotation_val(string s)
{
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        ans+= mp[s[i]];
    }
    return ans;
}

string rotation(string s ,int n)
{
    for(int i=0;i<s.size();i++)
    {
     int number=n;
    int val= mp[s[i]];
     number%=26;
     number+=val;
     number%=26;
     s[i]= mp2[number];
    }
    return s;
}

char mergee(int a,int b)
{
      b%=26;
      b+=a;
      b%=26;
      return mp2[b];
}


int main()
{
    mp.clear();
    mp2.clear();

    int num=0;

    for(char i='A';i<='Z';i++)
    {
        mp[i]=num;
        mp2[num]=i;
        //cout<<i<<" "<<num<<endl;
        num++;

    }

    string s1,s2,ss;
    int r1,r2;
    cin>>ss;
    int div=ss.size()/2;
    s1= ss.substr(0,div);
    s2=ss.substr(div,div);
    r1=rotation_val(s1);
    r2=rotation_val(s2);
    s1=rotation(s1,r1);
    s2=rotation(s2,r2);

    for(int i=0;i<s1.size();i++)
    {
        s1[i]=mergee(mp[s1[i]], mp[s2[i]]);
    }

    cout<<s1<<endl;



}
