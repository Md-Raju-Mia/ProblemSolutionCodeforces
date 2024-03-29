#include<bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
#define w(x) int x;cin>>x;while(x--)
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)


int32_t main(){
	FIO;
	w(t){
		int n,k;cin>>n>>k;
		int x=k/(n-1);
		int rem=k-x*(n-1);
		if(!rem)
		cout<<n*x-1<<endl;
		else
		cout<<n*x+rem<<endl;
	}

	return 0;
}