#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    for(int i=2;i<n;i++)
    {
        if(n%i==0){
            return 0;
            break;
        }

    }
    return 1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int temp=n+1;
    int l=1;
    while(l==1)
    {
        int A=prime(temp);
        if(A==1){
            l=0;
        }
        else{
            temp++;
        }
    }

    if(temp==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


}
