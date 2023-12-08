#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int time=0;
    while(x>0)
    {
        if(x%2==1)
        {
            x--;
            time++;
        }
        else
        {
            x=x/2;
        }
    }
    cout<<time<<endl;
    return 0;
}
