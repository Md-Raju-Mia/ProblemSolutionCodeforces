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
        int c1=n/3,c2=n/3;
        int rem=n%3;
        if(rem==1)
            cout<<c1+1<<" "<<c2<<endl;
        else if(rem==2)
            cout<<c1<<" "<<c2+1<<endl;
        else
            cout<<c1<<" "<<c2<<endl;
    }

    return 0;
}
