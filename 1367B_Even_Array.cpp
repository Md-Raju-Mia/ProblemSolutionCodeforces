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
        int array[n];
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        int even=0, odd=0, fine=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                if(array[i]%2==0)
                {
                    fine++;
                }
                else
                {
                    even++;
                }
            }
            else
            {
                if(array[i]%2==1)
                {
                    fine++;
                }
                else
                {
                    odd++;
                }
            }
        }

        if(n==fine)
            cout<<0<<endl;
        else if(even==odd)
            cout<<even<<endl;
        else
            cout<<-1<<endl;
    }
}
