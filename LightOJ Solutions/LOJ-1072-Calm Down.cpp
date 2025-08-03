/*
Problem Name : LOJ-1072-Calm Down
Problem Link : https://lightoj.com/problem/calm-down
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-10-24
*/

#include<bits/stdc++.h>
using namespace std;
#define PI 2*acos(0.0)
int main()
{
    int tc,j=1;
    scanf("%d",&tc);
    while(tc--)
    {
        double r,n,A,B,C,ans;
        scanf("%lf %lf",&r,&n);
        if(n==2)
            ans=r/2.0;
        else
        {
            A=2*PI/n;
            //cout<<"A = "<<A<<endl;
            B= (PI-A)/2.0;
            //cout<<"B = "<<B<<endl;
            C=sin(A)/sin(B);
            //cout<<"c = "<<C<<endl;
            ans= ((r*C)/(2.0+C));

        }
        //cout<<"Case "<<j++<<": "<<ans<<endl;
        printf("Case %d: %0.10lf\n", j++, ans);

    }

    return 0;

}


