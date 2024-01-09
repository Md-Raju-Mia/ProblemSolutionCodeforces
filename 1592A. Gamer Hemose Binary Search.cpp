#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,H;
        cin>>n>>H;
        long long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        if(H<=a[n-1])
            cout<<1<<endl;
        else
        {
            int ans = H/(a[n-1]+a[n-2]);
            int reminder =H%(a[n-1]+a[n-2]);
            if(reminder==0)
                cout<<ans*2<<endl;
            else
            {
                if(reminder<=a[n-1])
                    cout<<ans*2+1<<endl;
                else
                    cout<<ans*2+2<<endl;
            }
        }

    }
    return 0;
}
