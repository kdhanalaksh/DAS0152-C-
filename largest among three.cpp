#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<" value of a";
	cin>>a;
	cout<<"value of b";
	cin>>b;
	cout<<"value of c";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<"largest is"<<a;
	}
	else if(b>a && b>c)
	{
		cout<<"largest is"<<b;
	}
	else
	{
	cout<<"largest is"<<c;	
	}
	return 0;
}
