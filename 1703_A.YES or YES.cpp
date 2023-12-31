#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);

        if(s1=="YES")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
