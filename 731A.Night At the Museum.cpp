#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;

    char spos='a';
    int count=0;
    int x;

    for(int i=0;i<s.length();i++)
    {
        x = min(abs(spos-s[i]),26-abs(spos-s[i]));
        spos=s[i];
        count+=x;
    }
    cout<<count<<endl;
}
