#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
    string s,sub1="",sub2="";
    cin>>s;
    if(s.length()%2==0)
    {
       for(int i=0;i<s.length();i++)
       {
           if(i<s.length()/2)
            sub1+=s[i];
           else
            sub2+=s[i];
       }

       if(sub1==sub2)
        cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
        cout<<"NO"<<endl;
   }

   return 0;
}
