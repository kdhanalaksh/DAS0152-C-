#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Value of a";
	cin>>a;
	cout<<"Value of b";
	cin>>b;
	cout<<a;
	cout<<b;
	c=b;
	b=a;
	a=c;
	cout<<a;
	cout<<b;
	return 0;
}
