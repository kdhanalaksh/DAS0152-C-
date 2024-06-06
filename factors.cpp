#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"number";
	cin>>n;
	for(i=1;i<=10;i++)
	{
		if(n%i==0)
		cout<<i;
	}
	return 0;
}
