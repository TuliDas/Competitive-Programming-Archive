// Problem Name	: UVA 10035 - Primary Arithmetic
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=976
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2017-06-08

#include<bits/stdc++.h>
using namespace std;

string make_equal(string str1,string str2)
{
    int ll;
    ll= str2.size()-str1.size();
    while(ll--)
        str1= "0" + str1;
    return str1;
}
int main()
{
    string s1,s2;
    while(1)
    {
        cin>>s1>>s2;
        if(s1=="0" && s2=="0") break;
        if(s1.size()<s2.size())
        {
            s1= make_equal(s1,s2);
            swap(s1,s2);
        }
        else if(s2.size()<s1.size())
            s2= make_equal(s2,s1);
        int carry=0,c=0,n1,n2;
        for(int i=s1.size()-1; i>=0; i--)
        {
            n1=s1[i]-'0';
            n2=s2[i]-'0';
            c = c +n1+n2;
            if(c<=9)
                c=0;
            else
            {
                carry++;
                c=c/10;
            }
        }
        if(carry==0)
            cout<<"No carry operation."<<endl;
        else if(carry==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<carry<<" carry operations."<<endl;
    }
}
