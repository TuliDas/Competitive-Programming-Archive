/*
Problem Name : LOJ-1109-False Ordering
Problem Link : https://lightoj.com/problem/false-ordering
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-17
*/

#include<bits/stdc++.h>
using namespace std;

vector <int> v[1000],vv;
int pra[200],pp;

void prime_fun()
{
    int n=1000;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }


    pp=0;
    for (int p=2; p<=n; p++)
        if (prime[p])
        {
            pra[pp]=p;
            pp++;
        }

}

int divisor(int n)
{

    int div=1;
    for(int j=0; j<pp; j++)
    {


        int cnt=0;
        int tt=n;

        while(true)
        {

            if(tt%pra[j]==0)
            {
                cnt++;
                tt/=pra[j];
            }

            if(tt%pra[j]!=0)
                break;
        }
        div = div *(cnt+1);
    }
    return div;
}

int main()
{
    prime_fun();
    int r;

    for(int i=2; i<=1000; i++)
    {
        r=divisor(i);
        v[r].push_back(i);
    }

    int tc;
    scanf("%d",&tc);
    int kase=1;
    while(tc--)
    {
        int nn,ans;
        scanf("%d",&nn);
        if(nn==1)
            printf("Case %d: 1\n",kase++);
        else
        {
            nn--;
            vector <int> :: reverse_iterator it;
            int index=2;
            while(true)
            {
                if(v[index].empty())
                    index++;

                else
                {
                    for(it=v[index].rbegin(); it!=v[index].rend(); it++)
                    {
                        nn--;
                        ans=*it;
                        if(nn==0)
                            break;

                    }
                    index++;
                }
                if(nn==0)
                    break;

            }
            printf("Case %d: %d\n",kase++,ans);

        }

    }
}
