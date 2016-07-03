#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,c;
    while(cin>>a)
    {
        c=0;
        string s;
        cin>>s;

        for(int i=0; i<a-1; i++)
        {
            for(int j=i+1; j<a; j++)
            {
                if(s[i]==s[j])
                {
                    s[i]='0';
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}

