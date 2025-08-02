// Problem Name : UVA 10611 - The Playboy Chimp
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552
// Vjudge.net  	: https://vjudge.net/problem/UVA-10611
// Verdict	    : Accepted
// Language	    : C++11
// Solved on   	: 2016-11-05

#include<bits/stdc++.h>
using namespace std;

long long int ara[50000];
long long int n,q,p,in,aaa;
long long mid,test,L,H;

long long bini(int l, int h, int x)
{


    if (h >= l)
    {
        L = l;
        H = h;

        long long mid = l + (h - l)/2;


        if (ara[mid] == x)
            return mid;


        if (ara[mid] > x)
            return bini(l, mid-1, x);


        return bini(mid+1, h, x);
    }


    return -1;
}
int main()
{

    cin>>n;
    {
        for(long long i=0; i<n; i++)
        {
            scanf("%lld",&ara[i]);
        }

        scanf("%lld",&q);
        long long ll,hh,r,range;

        for(long long i=0; i<q; i++)
        {
            scanf("%lld",&p);
            ll=0;
            hh=0;
            r= bini(0,n-1,p);
            // cout<<" r = "<<r<<endl;
            if(r!=-1)
            {
                //cout<<" I have come "<<endl;
                // cout<<" r = "<<r<<endl;
                range = r-1;
                if(range<0)
                    ll=0;
                else
                {
                    // cout<<" range = "<<range<<endl;
                    while(range>=0)
                    {
                        //cout<<" Ha Ha Ha"<<endl;
                        // cout<<" mp[range] = "<<mp1[range]<<endl;
                        if(ara[range]<p)
                        {
                            ll=ara[range];
                            break;
                        }
                        range--;
                    }
                }
                if(ll==0)
                    cout<<"X ";
                else
                    cout<<ll<<" ";

                range= r+1;
                if(range>=n)
                    hh=0;
                else
                {
                    while(range<n)
                    {
                        if(ara[range]>p)
                        {
                            hh=ara[range];
                            break;
                        }
                        range++;
                    }
                }
                if(hh==0)
                    cout<<"X"<<endl;
                else
                    cout<<hh<<endl;

            }

            else
            {
                //cout<<"  L = "<<L<<" . H = "<<h<<endl;
                if(ara[L]<p)
                {
                    ll=ara[L];
                    if(L+1<n)
                        hh=ara[L+1];
                    else
                        hh=0;
                }
                else if(ara[L]>p)
                {
                    hh=ara[L];
                    if(L-1>=0)
                        ll=ara[L-1];
                    else
                        ll=0;
                }

                if(ll==0)
                    cout<<"X ";
                else
                    cout<<ll<<" ";

                if(hh==0)
                    cout<<"X"<<endl;
                else
                    cout<<hh<<endl;

            }


        }


    }
}

