#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, sumChar;
    char c;

    cin>>t;

    while(t--)
    {
        sumChar=657;
        for(int i=0;i<9;i++)
        {
            cin>>c;
            sumChar -=c;
        }

        cout<<char(sumChar)<<endl;
    }
    return 0;
}
