#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);
        int total=0;
        for(int i=n-1;i>=0;i--)
            total+=a[i]-a[0];

        cout<<total<<endl;

    }

    return 0;
}
