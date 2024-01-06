#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count=0;
        string s1="codeforces";
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]!=s1[i])
                count++;

        }

        cout<<count<<endl;
    }
}
