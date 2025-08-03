/*
Problem Name : LOJ-1189-Sum of Factorials
Problem Link : https://lightoj.com/problem/sum-of-factorials
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016
*/

#include<bits/stdc++.h>
using namespace std;

set <long long int> st;
long long int ara[25];
void precalculate()
{
    ara[0]=1;

    for(long long int i=1; i<=20; i++)
    {
        ara[i] = i * ara[i-1];
    }
}

int main()
{

    precalculate();
    int tc,kase=1;



    scanf("%d",&tc);
    while(tc--)
    {

        long long int n;
        scanf("%lld",&n);



        if(n==0)
            printf("Case %d: impossible\n",kase++);
        else
        {
            st.clear();

            for(long long int i=20; i>=0; i--)
            {
                if(ara[i]<=n)
                {
                    n-=ara[i];
                    st.insert(i);
                }
            }

            if(n!=0)
                printf("Case %d: impossible\n",kase++);

            else
            {
                int test=0;
                set <long long int> :: iterator it;
                printf("Case %d: ",kase++);
                for(it=st.begin(); it!=st.end(); it++)
                {
                    if(test==1)
                    {
                        cout<<"+";
                    }
                    printf("%lld!",*it);
                    test=1;
                }
                printf("\n");
            }
        }

    }

}
