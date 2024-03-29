#include<iostream>
using namespace std;

int main(){

	bool flag = false;
	int a,b;
	cin>>a>>b;
	int arr[a];
	for(int i=1;i<a;i++){
		cin>>arr[i];
	}

	for(int i=1;i<=b;i=i+arr[i]){
		if(i==b){
			cout<<"YES"<<endl;
			flag=true;
			break;
		}
	}

	if(flag==false){
		cout<<"NO"<<endl;
	}

}