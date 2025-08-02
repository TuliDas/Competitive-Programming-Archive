// Problem Name	: UVA 412 - Pi
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=353
// Vjudge.net   : https://vjudge.net/problem/UVA-412
// Verdict	    : Accepted
// Language	    : C++11 5.3.0
// Solved on   	: 2016-10-14

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    int temp;
    vector<int> st;
    while(cin>>N && N)
    {
        st.clear();
        for(int i=0;i<N;i++)
        {
            cin>>temp;
            st.push_back(temp);
        }
        int a, b;
        int n = st.size();
        int total = n*(n-1)/2;
        int knt = 0;
        for(vector<int>::iterator it = st.begin(); it!=st.end(); it++)
        {
            vector<int>::iterator it2 = it;
            it2++;

            for(; it2!=st.end(); it2++)
            {

                if(__gcd(*it, *it2)==1)
                {
                    //cout<<*it<<" "<<*it2<<endl;
                    knt++;
                }

            }
        }

        double ans;

        if(knt!=0)
        {
            ans = sqrt(total*6.0/(knt*1.0));
            printf("%0.6lf\n", ans);
            //cout<<ans<<endl;
        }
        else
        {
            cout<<"No estimate for this data set."<<endl;
        }
    }
    return 0;
}
