#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    vector<long long int> v;
    v.push_back(1);
    v.push_back(2);
    for(int i=3;i<1e6;i++)
    {
        if(i%3==0 || i%10==3)
        {
            continue;
        }
        else{
            v.push_back(i);
        }
    }
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        cout<<v[n-1]<<endl;
    }

    return 0;
}
