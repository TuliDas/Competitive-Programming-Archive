/*
Problem Name : LOJ-1043-Triangle Partitioning
Problem Link : https://lightoj.com/problem/triangle-partitioning
Language     : C++ 11
Verdict      : ACCEPTED
Solved On    : 2016-11-07
*/

#include<bits/stdc++.h>
using namespace std;

#define M 1000005
#define ll long long

double fun(double a,double b,double c)
{
    double s=a+b+c,res;
    s/=2;
    res= s* (s-a)* (s-b) *(s-c);
    res = sqrt(res);
    return res;
}


int main()
{
    int tc;
    double R,lo,hi,AB,AC,BC,AD,AE,DE;
    // freopen("input.txt","w+",stdout);
    scanf("%d",&tc);
    for(int cs=1; cs<=tc; cs++)
    {
        cin>>AB>>AC>>BC>>R;
        lo=0;
        hi=AB;
        double mid,Area,area,r,t_area,temp;
        int run=100,i=1;
        while(run--)
        {
            //cout<<"step = "<<i++<<endl;
            mid= (lo+hi)/2.00;
            Area= fun(AB,AC,BC);
            //cout<<"Total Area = "<<Area<<endl;
            AD=mid;
            r = AD/AB ;
            AE = r * AC;
            DE = r * BC;
            //cout<<"AD = "<<AD<<", AE = "<<AE<<" , DE = "<<DE<<endl;
            area = fun(AD,AE,DE);
            //cout<<"triangle Area = "<<area<<endl;
            t_area = Area - area;
            // cout<<"trapizium Area = "<<t_area<<endl;
            temp = area / t_area;

            //cout<<"ratio = "<<temp<<endl;

            if(temp > R)
                hi = mid;
            else
                lo=mid;

        }
        //cout<<"Case "<<cs<<": "<<AD<<endl;
        printf("Case %d: %.8lf\n",cs,AD);
    }

}
