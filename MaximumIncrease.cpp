#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,temp,x;
	cin>>n>>temp;
	int count=1;
	int maxcnt=1;
	for(int i=1;i<n;i++)
	{
		cin>>x;
		if(x>temp)
		{
			count++;
			maxcnt=max(maxcnt,count);
			temp=x;
		}
		else{
			count=1;
			temp=x;
		}
	}
	cout<<maxcnt<<endl;
	
}
