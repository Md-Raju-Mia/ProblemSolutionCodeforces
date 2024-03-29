#include<iostream>
using namespace std;
int main(){

	int t;
	cin>>t;

	while (t--)
	{
		long long int a,b;
		cin>>a>>b;
		if(a==b)
		{
			cout<<"0"<<endl;
		}
		else{
			if(b>a && a%2==0 && b%2==1) //2 7
			{
				cout<<"1"<<endl;
			}
			else if(b>a && a%2==0 && b%2==0){  // 2 8
				cout<<"2"<<endl;
			}
			else if(b>a && a%2==1 &&b%2==1){ //3 9
				cout<<"2"<<endl;
			}
			else if(b>a && a%2==1 && b%2==0){ //3 10
				cout<<"1"<<endl;
			}
			else if(a>b && b%2==0 && a%2==1 ) //5  4
			{
				cout<<"2"<<endl;
			}
			else if(a>b && b%2==0 && a%2==0 )  // 6  4
			{
				cout<<"1"<<endl;
			}
			else if(a>b && b%2==1 && a%2==1 ) // 5   3
			{
				cout<<"1"<<endl;
			}

			else if(a>b && b%2==1 && a%2==0 ) // 6   3
			{
				cout<<"2"<<endl;
			}

			
		}   

	}
	
}

