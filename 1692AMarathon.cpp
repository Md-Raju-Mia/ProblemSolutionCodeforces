#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[4];
    while(t--)
    {
        int count=0;
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }

        for(int i=1;i<4;i++){
            if(a[i]>a[0])
                count++;
        }

        cout<<count<<endl;

    }
}
