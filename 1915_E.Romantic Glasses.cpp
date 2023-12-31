#include<bits/stdc++.h>
using namespace std;
int t,n;
long long ar[200001];
int main()
{

    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
            if(i%2==0)
                ar[i]=-ar[i];
            ar[i]+=ar[i-1];
        }
        sort(ar,ar+n+1);
        bool b=false;
        for(int i=0;i<=n;i++)
        {
            if(ar[i]==ar[i+1])
            {
                cout<<"YES"<<endl;
                b=true;
                break;
            }
        }
        if(b==false)
            cout<<"NO"<<endl;

    }
    return 0;
}
