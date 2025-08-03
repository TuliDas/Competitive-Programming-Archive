/*
Problem Name : LOJ-1088-Points in Segments
Problem Link : https://lightoj.com/problem/points-in-segments
Language     : C++
Verdict      : ACCEPTED
Solved On    : 2016-11-06
*/

#include<bits/stdc++.h>
using namespace std;
long long n,q,ara[100005],a,b;

long long binarylower(long long m,long long l,long long u)
{
	long long mid,c=0;
   	if(l<=u)
	{
 	    	mid=(l+u)/2;
      		if(m==ara[mid])
      		{
			c=m;
        	 	return binarylower(m,l,mid-1);
      		}
      		else if(m<ara[mid])
		{
        	  	return binarylower(m,l,mid-1);
      		}
      		else
		{
			return binarylower(m,mid+1,u);
       		}
    	}
   	else
        	return l;
  }
long long binaryupper(long long m,long long l,long long u)
{
	int mid,c=0;
   	if(l<=u)
	{
 	    	mid=(l+u)/2;
      		if(m==ara[mid])
      		{
			c=m;
        	 	return binaryupper(m,mid+1,u);
      		}
      		else if(m<ara[mid])
		{
        	  	return binaryupper(m,l,mid-1);
      		}
      		else
		{
			return binaryupper(m,mid+1,u);
       		}
    	}
   	else
        	return u;
  }


int main()
{
    int tc,kase=1;

    scanf("%d",&tc);
    while(tc--)
    {


       scanf("%lld %lld",&n,&q);

        for(long long i=0;i<n;i++)
            scanf("%lld",&ara[i]);

       long long ans;
       bool flag=true;

        while(q--)
        {

            scanf("%lld %lld",&a,&b);
            ans = binaryupper(b,0,n-1) - binarylower(a,0,n-1) + 1;



            if(flag)
            {
                printf("Case %d:\n",kase++);
                flag=false;
            }
            printf("%lld\n",ans);
          }

    }
}

