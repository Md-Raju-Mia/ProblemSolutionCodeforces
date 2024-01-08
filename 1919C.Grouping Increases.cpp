#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int ans=0;

        int lastA=n+2, lastB=n+2;

        for(int i=0;i<n;i++)
        {
            if(lastA>lastB){
                swap(lastA,lastB);

            }

            if(a[i]<=lastA){
                lastA=a[i];
            }
            else if(a[i]<=lastB){
                lastB=a[i];
            }
            else{
                lastA=a[i];
                ans++;
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
