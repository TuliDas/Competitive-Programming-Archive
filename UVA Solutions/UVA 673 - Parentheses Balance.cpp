// Problem Name	: UVA 673 - Parentheses Balance
// Problem Link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=614
// Vjudge.net  	: https://vjudge.net/problem/UVA-673
// Verdict	: Accepted
// Language	: C++11
// Solved on   	: 2016-10-18


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char arr[130];
    stack <char> st;
    scanf("%d",&n);
    getchar();

    while(n--)
    {
        while(!st.empty())
            st.pop();
        gets(arr);
        int len = strlen(arr);
        bool flag=true;
        for(int i=0; i<len; i++)
        {
            char c=arr[i];
            if(c=='(' || c== '[')
                st.push(c);
            else if(st.empty())
            {
                flag=false;
                break;
            }
            else
            {
                char Top =st.top();
                if((c==')' && Top=='(') || (c==']' && Top=='['))
                    st.pop();
                else
                {
                    flag=false;
                    break;
                }

            }

        }

        if(!st.empty())
            flag=false;

        if(flag)
            printf("Yes\n");
        else
            printf("No\n");

    }
}


