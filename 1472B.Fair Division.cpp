#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,one=0,two=0;
       cin>>n;
       //vector<int> v;
       vector<int> v(n);
       for(int i=0;i<n;i++)
       {
           /*int x;
           cin>>x;
           v.push_back(x);*/
           cin>>v[i];
       }
       //decending sort
       sort(v.rbegin(),v.rend());

       for(auto i:v)
       {
           if(one<=two)
            one+=i;
           else
            two+=i;
       }

       one==two?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}
