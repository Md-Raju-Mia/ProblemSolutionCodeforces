#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[4];
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        int m1 = max(a[0],a[1]);
        int m2= max(a[2],a[3]);
        int x= min(m1,m2);
        int y=max(m1,m2);
        int z=0;
        for(int i=0;i<4;i++)
        {
            if(a[i]>x && a[i]!=y)
            {
                z=1;
                break;
            }


        }
        if(z==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}
