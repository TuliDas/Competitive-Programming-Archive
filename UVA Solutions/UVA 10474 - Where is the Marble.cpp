// Problem Name: UVA 10474 - Where is the Marble?
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415
// Vjudge.net  	: https://vjudge.net/problem/UVA-10474
// Verdict	: Accepted
// Language	: C++11
// Solved on   : 2017-03-23


#include<bits/stdc++.h>
using namespace std;
vector <int> v;
multiset <int> st;
int ara[10005];
int main()
{
    int n,q,kase=1;
    while(cin>>n>>q)
    {
        if(n==0 && q==0)
            break;
        memset(ara,0,sizeof(ara));
        v.clear();
        st.clear();
        int num;
        while(n--)
        {
            cin>>num;
            st.insert(num);
        }
        int index=1;
        multiset <int> :: iterator pt;

        for(pt=st.begin(); pt!=st.end(); pt++)
        {
            v.push_back(*pt);
        }


        cout<<"CASE# "<<kase++<<":"<<endl;
        while(q--)
        {
            cin>>num;
            int pos=find(v.begin(),v.end(),num)-v.begin();
            if(pos<v.size())
            {
                cout<<num<<" found at "<<pos+1<<endl;
            }
            else
            {
                cout<<num<<" not found"<<endl;
            }
        }

    }
}

