#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
       long long int a,b,c,k;
        cin>>a>>b>>c;
        k=c/a;
        int temp = a*k+b;
        while(temp>c)
        {
            k--;
            temp = a*k+b;
        }

        cout<<temp<<endl;



    }
}
