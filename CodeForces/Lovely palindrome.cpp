#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        cout<<s;
        reverse(s.begin(),s.end());
        cout<<s;
        cout<<endl;
    }
    return 0;
}


