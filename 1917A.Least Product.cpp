#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec(n);
        int zero=0, negative =0;

        for(int i=0;i<n;i++)
        {
            cin>>vec[i];
            if(vec[i]==0)
                zero++;
            else if(vec[i]<0)
                negative++;
        }

        if(zero>0 || negative%2 !=0)
            cout<<0<<endl;
        else{
            cout<< 1<<endl;
            cout<<1 << " "<<0<<endl;
        }

    }
    return 0;
}
