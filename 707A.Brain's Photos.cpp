#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,count=0;

    cin>>n>>m;
    char a[n*m];
    for(int i=0;i<n*m;i++)
    {
        cin>>a[i];
        if(a[i]=='C' || a[i]=='M' || a[i]=='Y')
        {
                cout<<"#Color"<<endl;

                break;
        }
        else
        {
            count++;
        }
    }
    if(count==n*m)
        cout<<"#Black&White"<<endl;


        return 0;

}
