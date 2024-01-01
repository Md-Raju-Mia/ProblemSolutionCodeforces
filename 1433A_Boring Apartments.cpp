#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,len,count=0;
        cin>>x;
        stringstream ss;
        ss<<x;
        string s;
        ss>>s;
        len = s.length();
        int a= x%10;
        count=(a-1)*10+len;
        while(len--)
        {
            count+=len;
        }

        cout<<count<<endl;

    }
}
