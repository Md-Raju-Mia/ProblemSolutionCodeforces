#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y,temp;
        cin>>a>>b;
        x=min(a,b);
        y=max(a,b);
        temp=x+x;
        if(temp>y)
            cout<<temp*temp<<endl;
        else
            cout<<y*y<<endl;


    }
    return 0;
}
