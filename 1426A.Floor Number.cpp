#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        n=n-1;
        int count=1;
        int floor=1;
        while(floor<n)
        {
            floor+=x;
            count++;
        }

        cout<<count<<endl;

    }
    return 0;
}
