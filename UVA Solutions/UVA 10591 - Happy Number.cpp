// Problem Name	: UVA 10591 - Happy Number
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=1532
// Vjudge.net  	: https://vjudge.net/problem/UVA-10591
// Verdict	    : Accepted
// Language	    : C++11
// Solved on   	: 2016-10-18

#include<bits/stdc++.h>
using namespace std;
map <long long,bool> mp;
int main()
{
    int ara[10];
    mp.clear();
    long long t=1;
    for(int i=0; i<=9; i++)
    {
        ara[i]=i*i;
    }
    int n,kase=1;
    cin>>n;
    while(n--)
    {
        int num,temp;
        cin>>num;
        temp=num;
        mp.clear();
        while(true)
        {
            if(num==1)
                break;
            if(mp[num]==true)
                break;
            else
            {
                mp[num]=true;
                int sum=0;
                while(num)

                {
                    sum+=ara[num%10];
                    num/=10;
                }
                num=sum;

            }
        }
        if(num==1)
            printf("Case #%d: %d is a Happy number.\n",kase++,temp);
        else
            printf("Case #%d: %d is an Unhappy number.\n",kase++,temp);

    }

    return 0;

}
