#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        long long int b,c;
        b=0;
        c=0;
        for(int i=0; i<4; i++)
        {
            if(s1[i]==s2[i])
            {
                b++;
                s1[i]='a';
                s2[i]='b';
            }
            else
{


            for(int j=0; j<4; j++)
            {
                if(j!=i && s1[i]==s2[j])
                {
                    c++;

                }
            }
}
        }
        cout<<b<<" "<<c<<endl;

    }


    return 0;


}


