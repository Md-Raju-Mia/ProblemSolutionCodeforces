#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='+')
                count++;
            if(s[i]=='-')
                count--;
        }

        cout<<abs(count)<<endl;
    }
}
