#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){

		int a,b,c;
		cin>>a>>b>>c;
		int tent=0;

		tent+=a;

		if(b>2){
			tent+=b/3;
			b=b%3;
		}

		if(b+c>2){
			tent += (b+c)/3;
			c=(b+c)%3;
			b=0;
			

		}

		if(b==0 && c>0 && c<3){
			tent++;
			c=0;
		}

		if(b>0 || c>0){
			cout<<"-1"<<endl;
		}
		else{
			cout<<tent<<endl;
		}

	}

}