#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long int min_a=INT_MAX, min_b=INT_MAX;
        cin>>n;
        long long int a[n];
        long long int b[n];
        long long int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            min_a=min(min_a,a[i]);
        }


        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            min_b=min(min_b,b[i]);
        }

        for(int i=0;i<n;i++)
        {
            ans+=max(a[i]-min_a, b[i]-min_b);
        }
        cout<<ans<<endl;
    }
}
