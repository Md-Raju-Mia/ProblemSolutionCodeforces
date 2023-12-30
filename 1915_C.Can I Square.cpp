#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,sum=0,na;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>na;
            sum+=na;
        }
        if(sqrt(sum)==round(sqrt(sum)))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
