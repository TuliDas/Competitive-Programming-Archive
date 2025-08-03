/*
Problem Name : LOJ-1062-Crossed Ladders
Problem Link : https://lightoj.com/problem/crossed-ladders
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016
*/


#include<bits/stdc++.h>
using namespace std;
long double x,y,c,h1,h2,h,d,d1,d2,lo,hi,mid,ans;

int main()
{
    int tc,kase=1;
    cin>>tc;
    while(tc--)
    {
        cin>>x>>y>>c;

        ans=-1;
        lo=0;
        hi=max(x,y);
       // cout<<" hi "<<hi<<endl;
        //cout<<"input = "<<x<<y<<endl;

        // hi=10;
        for(int i=0;i<100;i++)
        {

            mid= (hi+lo)/2.0;
            h1=mid;
            d= sqrt(x*x - h1*h1);
            if(d>y)
            {
                lo=mid+1;
                continue;
            }
           // cout<<" d = "<<d<<endl;
            h2= sqrt(y*y-d*d);
            //cout<<"mid = "<<mid<<",,, "<<"d = "<<d<<endl;
            //cout<<h1<<"==="<<h2<<endl;
            h=(1.0/h1) + (1.0/h2) ;
            //cout<<h<<endl;
            h= 1.0/h;
            //cout<<"d = "<<d<<", h = "<<h<<endl;
            if(h<=c)
            {
                if(ans!=-1)
                ans= min(ans,d);
                else
                    ans=d;

                lo=mid+1;
            }
            else
                hi=mid-1;


        }
        cout<<"Case "<<kase++<<": "<<fixed<<setprecision(10)<<ans<<endl;

    }


}
