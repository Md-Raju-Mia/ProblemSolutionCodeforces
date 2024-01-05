#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int ans=0;
        for(int i=1; i<=9; i++)
        {
            long long int temp=i;
            while(n>=temp)
            {
                ans++;
                temp=(temp*10)+i;
            }
        }
        cout<<ans<<endl;

    }
}
