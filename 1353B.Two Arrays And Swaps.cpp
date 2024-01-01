#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int array_a[n];
        int array_b[n];
        for(int i=0;i<n;i++)
            cin>>array_a[i];
        for(int i=0;i<n;i++)
            cin>>array_b[i];

        sort(array_a,array_a+n);
        sort(array_b,array_b+n,greater<int>());
        int i=0;
        while(k--)
        {
            if(array_a[i]<array_b[i])
            {
                array_a[i]=array_b[i];
            }
            i++;
        }



        int sum=0;
        sum= accumulate(array_a,array_a+n,sum);

        cout<<sum <<endl;


    }
}
