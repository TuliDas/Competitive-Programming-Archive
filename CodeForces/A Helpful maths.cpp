#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int a[105];
        int j=0;
        for(int i=0;i<s.size();i+=2)
        {
           a[j]=s[i];
           j++;
        }
        sort(a,a+j);
        int t=0;
        for(int k=0;k<s.size();k+=2)
        {
            s[k]=a[t];
            t++;
        }
        cout<<s<<endl;

    }
    return 0;
}
