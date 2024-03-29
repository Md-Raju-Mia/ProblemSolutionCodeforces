#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int cnt =0;
		for(int i=0;i<n;i++)
		{
			int x;

			cin>>x;

			if(x%2==1)
				cnt++;
				
		}

		if(cnt%2==1)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;

	}
}