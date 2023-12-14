#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum1=0,sum2=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        if(a>b)
            sum1++;
        else if(a<b)
            sum2++;
            else{
                continue;
            }
    }
    if(sum1>sum2)
        cout<<"Mishka"<<endl;
    else if(sum1==sum2)
        cout<<"Friendship is magic!^^"<<endl;
    else
        cout<<"Chris"<<endl;
}
