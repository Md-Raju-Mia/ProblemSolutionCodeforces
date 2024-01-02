#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,total_sum=0;
    int count=0;
    int info=0;
    while(total_sum<=n)
    {
        count++;
        info++;
        sum+=info;

        total_sum+=sum;

    }
    cout<<count-1<<endl;
}
