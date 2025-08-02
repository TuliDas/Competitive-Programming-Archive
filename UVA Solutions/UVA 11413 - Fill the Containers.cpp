// Problem Name	: UVA 11413 - Fill the Containers
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=2408
// Vjudge.net  	: https://vjudge.net/problem/UVA-11413
// Verdict	    : Accepted
// Language	    : C++11
// Solved on   	: 2016-11-09


#include<bits/stdc++.h>
using namespace std;


int bini(int lw,int hi)
{
    return (lw+hi)/2 ;
}

int main()
{
//freopen("myfile.txt","r",stdin);
// freopen("output.txt","r",stdout);

    int  n,m,ara[1005];
    int mid,mm,nn,ans,mxx,test,maxxx;

    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int  hi=0,lw=0;
        for(int  i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
            hi+=ara[i];
            if(ara[i]>lw)
                lw=ara[i];
        }
        if(m==1)
            {
             cout<<hi<<endl;
            }

        else if(m>=n)
            {
                cout<<lw<<endl;
            }
        else
        {
            while(lw<=hi)
            {
                mm=1;
                ans=0;
                mid=bini(lw,hi);
              //  cout<<"lw = "<<lw<<", hi = "<<hi<<endl;
               // cout<<" for mid = "<<mid<<"--";

                for(int i=0; i<n; i++)
                {
                    ans+=ara[i];

                    if(ans>mid)
                    {
                        mm++;
                        i--;
                        ans=0;
                    }
                    if(mm>m)
                        break;
                }
              //  cout<<"mm = "<<mm<<" -- "<<"m = "<<m<<endl;

                if(mm==m)
                {
                    mxx = mid;
                   // cout<<"mxx  = "<<mxx<<endl;
                    hi=mid-1;
                    mid= bini(lw,hi);
                }
                else if(mm<m)
                {
                    hi=mid-1;
                    mid= bini(lw,hi);
                }
                else
                {
                    lw= mid+1;
                    mid= bini(lw,hi);
                }
              //if(lw==hi)
               // mxx=mid;

                //cout<<"mxx  = "<<mid<<endl;
            }
            cout<<mid+1<<endl;

        }


    }
    //fclose(stdout);
    return 0;
}

