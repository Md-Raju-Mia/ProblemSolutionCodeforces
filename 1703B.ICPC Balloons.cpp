#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        unordered_set<char> uc;
        for(int i=0;i<n;i++)
        {
            uc.insert(s[i]);
        }

        cout<<uc.size()*2 + (n-uc.size())<<endl;

    }
}
