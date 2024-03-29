#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	if(n%2 !=0)
	{
		cout<<"-1"<<endl;
	}
	else{
		int arr[101];
		for(int i=1;i<=n;i++){
			arr[i]=i;
		}
		for(int i=1;i<=n-1;i++){
			swap(arr[i],arr[i+1]);
			i++;
		}
		for(int i=1;i<=n;i++){
			cout<<arr[i]<<" ";
		}
	}
}