#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s, o="";
        cin>>s;

        o+=s[0];
        for(int i=1;i<s.length();i++)
        {
            o+=s[i];
            if(s[i]==s[i+1])
                i++;
        }


        cout<<o<<endl;
    }
    return 0;
}
