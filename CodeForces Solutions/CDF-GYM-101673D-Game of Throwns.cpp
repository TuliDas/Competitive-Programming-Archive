/*
Problem Name : CDF-GYM-101673D-Game of Throwns
Problem Link : https://codeforces.com/gym/101673/attachments
Vjudge.net   : https://vjudge.net/problem/Gym-101673D
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2018-03-20
*/

#include<bits/stdc++.h>
using namespace std;
stack <int> st;
string s,temp;
stringstream ss;
bool undo=false;
vector <int> v;

void cal(string temp)
{

    if(temp=="undo") undo=true;

    else
    {
        int dd=1,num;
        int ans=0;
        for(int i=temp.size()-1; i>=0; i--)
        {

            if(temp[i]>='0' && temp[i]<='9')
            {
                num = temp[i]- '0';
                ans+= num *dd;
                dd*=10;
            }

        }


        if(temp[0]=='-') ans*=(-1);
       ;
        if(undo==true)
        {
            for(int i=0; i<ans; i++)
            {
                st.pop();
            }
            undo=false;
            return ;
        }

        st.push(ans);
    }
}

int moduluss(int n,int m)
{
    if(m<0)
    {
        m*=(-1);
        return (n- m%n);
    }
    return m%n;
}


int main()
{
    int n,t;
    cin>>n>>t;
    getchar();
    getline(cin,s);
    ss<<s;

    while(!st.empty())
        st.pop();

    while(!ss.eof())
    {
        ss>>temp;
        cal(temp);
    }
    int finall=0,test,cur=0;
    while(!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }


    for(int i=v.size()-1;i>=0;i--)
    {
         test=v[i];
         finall=moduluss(n,test);
         finall+=cur;
         finall=moduluss(n,finall);
         cur=finall;
         //cout<<cur<<" "<<endl;
         st.pop();
    }

   cout<<finall<<endl;
}
