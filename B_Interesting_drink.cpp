#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}

	sort(array,array+n);

	

	int day,coin;
	cin>>day;

	while(day--){
		cin>>coin;
		
		auto it = upper_bound(array,array+n,coin);

		
		cout<<it-array<<endl;
	}

}