#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long long int w,h,n;
        cin>>w>>h>>n;
        int count=1;
        if(n==1)
            cout<<"YES"<<endl;
        else if(n>1 && w%2==1 && h%2==1)
            cout<<"NO"<<endl;
        else{
            while(w%2!=1 || h%2!=1)
            {
                if(w%2==0)
                {
                    w=w/2;
                    count=count*2;
                }
                if(h%2==0)
                {
                    h=h/2;
                    count=count*2;
                }

            }
            if(count>=n)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }

    return 0;
}
