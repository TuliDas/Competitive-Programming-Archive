/*
Problem Name	: UVA 12468 - Zapping
Problem Link    : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3912
Vjudge.net  	: https://vjudge.net/problem/UVA-12468
Language	: C++
Solved on   	: 2016-02-27
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b;
    while(cin>>a>>b)
    {
        if(a==-1 && b==-1)
            break;

         if(a>b)
            swap(a,b);
        int ans1,ans2;
        ans1= (b-a);
        if(ans1<0)
            ans1=1000;

        ans2=100+a-b;
        if(ans2<0)
            ans2=1000;

        cout<<min(ans1,ans2)<<endl;
    }

}
