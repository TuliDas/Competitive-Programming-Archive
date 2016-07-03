#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int i,j,k,p;
    string s,ss;
    while(cin>>s)
    {
        j=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]!='a' && s[i]!='A' && s[i]!='e' && s[i]!='E' && s[i]!='i' && s[i]!='I' && s[i]!='o' && s[i]!='O' && s[i]!='u' && s[i]!='U' && s[i]!='y' && s[i]!='y')
            {
                ss[j]=tolower(s[i]);
                j++;
            }
        }
        p=0;
        for(k=0; k<j*2; k++)
        {
            if(k%2==0)
                cout<<".";
            else
            {
                cout<<ss[p];
                p++;
            }
        }
        cout<<endl;

    }
    return 0;
}


