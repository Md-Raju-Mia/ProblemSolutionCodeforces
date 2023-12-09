#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    long long int n=stoi(s);
    if(n>=0)
        cout<<n<<endl;
    else{
            string t1="",t2="";
        for(int i=0;i<s.length();i++)
        {
            if(i==s.length()-1)
                break;
            else
                t1+=s[i];

        }
         for(int i=0;i<s.length();i++)
        {
            if(i==s.length()-2)
                continue;
            else
                t2+=s[i];

        }
        long long int n1=stoi(t1);
        long long int n2=stoi(t2);
        if(n1>n2)
            cout<<n1<<endl;
        else
            cout<<n2<<endl;

    }

    return 0;
}
