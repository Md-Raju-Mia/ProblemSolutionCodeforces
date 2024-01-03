#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int h,m;
        cin>>h>>m;
        int total_minute = h*60+m;

        int fix_minute = 24*60;

        cout<<fix_minute-total_minute<<endl;

    }
}
