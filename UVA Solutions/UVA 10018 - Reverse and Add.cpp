// Problem Name	: UVA 10018 - Reverse and Add
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=959
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2016-10-19

#include<bits/stdc++.h>
using namespace std;

long long pali(long long n1,long long len,long long dd)
{
    long long n2=0;
    for(long long i=0; i<len; i++)
    {
        n2+=(n1%10)*dd;
        dd/=10;
        n1/=10;
    }

    return n2;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        long long n1,n2,num,test,num1,len,dd,ans,cnt=0;

        cin>>n1;



            while(true)
            {
                len=0;
                test=n1;
                num1=n1;
                n2=0;
                dd=1;
                while(test!=0)
                {
                    len++;
                    dd*=10;
                    test/=10;
                }
                dd/=10;

                n2=pali(n1,len,dd);

                // cout<<num1<<"---"<<n2<<endl;

                if(num1==n2)
                    break;

                cnt++;

                n1=num1+n2;
            }
            cout<<cnt<<" "<<n2<<endl;

    }
    return 0;
}

