/*
Problem Name : CDF-702C-Cellular Network
Problem Link : https://codeforces.com/problemset/problem/702/C
Language     : C++
Verdict      : ACCEPTED
Solved On    : Nov/22/2016
*/

#include<bits/stdc++.h>
using namespace std;
vector <long long> city,dis;
long long n,m,lo,hi,p;
int main()
{
    while(scanf("%lld %lld",&m,&n)==2)
    {
        city.clear();
        dis.clear();

        for(int i=0; i<m; i++)
        {
            scanf("%lld",&p);
            city.push_back(p);

        }
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&p);
            dis.push_back(p);
        }
        lo=0;
        hi = max(city[m-1],dis[n-1]) - min(city[0],dis[0]);

        if(m==1)
        {
            int pp,tt;
            pp=  lower_bound(dis.begin(),dis.end(),city[0])- dis.begin();
            tt=  upper_bound(dis.begin(),dis.end(),city[0]) - dis.begin();

            if(tt>=n)
                tt--;

            //   cout<<"lower = "<<pp<<", upper = "<<tt<<endl;

            long long aa,bb;
            if(dis[tt]==city[0] || dis[pp]==city[0])
                cout<<"0"<<endl;

            else
            {
                if(tt==pp)
                {
                    aa=abs(dis[tt]-city[0]);

                    if(pp!=0)
                        bb=abs(city[0]-dis[pp-1]);
                    else
                        bb=abs(city[0]-dis[pp]);
                    //cout<<aa<<" aa , bb "<<bb<<endl;
                }
                else
                {

                    bb= abs(dis[tt]-city[0]);
                    if(pp!=0)
                        aa= abs(city[0] - dis[pp-1]);
                    else
                        aa= abs(city[0] - dis[pp]);


                    // cout<<aa<<" aa , bb "<<bb<<endl;
                }

                cout<<min(aa,bb)<<endl;
            }
        }

        else

        {
            long long mid;


            long long a,b,t,s,ans,g,h;
            ans=2147483648;

            lo=0;

            while(lo<=hi)
            {
                mid = (hi+lo)/2;
                a=2147483648;
                b=2147483648;
                // cout<<"mid = "<<mid<<"- - "<<endl;
                bool flag=true,lll=false,hhh=false;
                for(int i=0; i<n; i++)
                {
                    //cout<<"for - "<<dis[i]<<">> ";
                    g= dis[i]-mid;
                    h= dis[i]+mid;
                    //
                    //  cout<<"t="<<t<<", s="<<s<<endl;
                    t = lower_bound(city.begin(),city.end(),g) - city.begin();
                    s = upper_bound(city.begin(),city.end(),h) - city.begin();
                    if(s!=t)
                        s--;
                    if(t==0 && g<=city[0] && h>=city[0])
                    {
                        //cout<<"g = "<<g<<", h = "<<h<<"--";
                        //cout<<"lll true"<<endl;
                        lll=true;
                    }
                    if(s==(m-1) && h>=city[m-1])
                        hhh=true;
                    //cout<<"lower ="<<t<<", upper ="<<s<<endl;

                    if((t<=b || abs(t-b)==1))
                    {

                        a=b;
                        b=s;
                    }
                    else
                    {
                        flag=false;
                        break;
                    }

                    //cout<<"a="<<a<<", b="<<b<<endl;

                }
                //cout<<" for mid = "<<mid<<"---";
                //cout<<"a = "<<a<<" , b = "<<b<<endl;

                if((flag==true) && (b==(m-1)) && (lll==true) && hhh==true )
                {
                    //cout<<"Yes = "<<mid<<endl;
                    ans=min(mid,ans);
                    hi=mid-1;
                }
                else
                    lo=mid+1;

                // cout<<endl<<endl;
            }
            cout<<ans<<endl;
        }



    }
}
