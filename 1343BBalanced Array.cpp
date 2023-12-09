#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, sumeven=0, sumodd=0;
        cin>>n;
        if(n%2==0)
        {
            if(n%4==0)
            {
                cout<<"YES"<<endl;
                vector<int> v;
                for(int i=1; i<=n; i++)
                {
                    if(i%2==0)
                    {
                        v.push_back(i);
                        sumeven+=i;
                    }

                }
                for(int i=1; i<=n; i++)
                {
                    if(i%2!=0)
                    {
                        v.push_back(i);
                        sumodd+=i;
                    }

                }
                v.back()=v.back()+(sumeven-sumodd);
                for(int i=0; i<n; i++)
                {
                    cout<<v[i]<<" ";
                }
            }
            else
            {
                cout<<"NO"<<endl;
            }

        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}




///1,2,3,4,5,6
///2,4,6,     1,3,5
///12          9
///12-9=3      1,3,(5+3)=8  not correct

/*
1,2,3,4,5,6,7,8,9,10
2,4,6,8,10          1,3,5,7,9
30                  25
30-25=5             1,3,5,7,(9+5)=14
*/
