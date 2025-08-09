/*
Problem Name : CDF-714B-Filya and Homework
Problem Link : https://codeforces.com/contest/714/problem/B
Language     : C++
Verdict      : ACCEPTED
Solved On    : Sep/13/2016
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,ara[100000],mn,mx;
    set<long long> st;

    while(cin>>n)
    {
        mn=1000000006;
        mx=-1;
        st.clear();
        for(int i=0;i<n;i++)
        {
            cin>>ara[i];
            mn=min(ara[i],mn);
            mx=max(ara[i],mx);
            st.insert(ara[i]);


        }

        /*
        if((mx+mn)%2==1)
            cout<<"NO"<<endl;

        else
        {
            long long mid=(mx+mn)/2;
            long long s=mid-mn;
            bool flag=true;
            for(int i=0;i<n;i++)
            {
                if(ara[i]<mid)
                {
                    if(ara[i]+s!=mid)
                    {
                        flag=false;
                        break;
                    }

                }
                else if(ara[i]>mid)
                {
                     if(ara[i]-s!=mid)
                    {
                        flag=false;
                        break;
                    }
                }

            }*/

        bool flag = true;
        if(st.size()>=4)
        {
            flag=false;
        }

        if(st.size()==3)
        {
            long long temparr[3];
            int indx = 0;
            for(set<long long>::iterator it = st.begin();it!=st.end();it++)
            {
                //cout<<*it<<endl;
                temparr[indx++] = *it;
            }

            if(temparr[2]-temparr[1] != temparr[1]-temparr[0])
            {
                flag = false;
            }
        }



        if(flag==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }




}
 
