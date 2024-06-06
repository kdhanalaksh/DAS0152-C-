#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter the three numbers";
	cin>>a;
	cin>>b;
	cin>>c;
	if(a>b)
	{
		if (a>c){
			cout<<a;
		}
	}
	 else if(b>c)
	{
		if(b>a)
		{
			cout<<b;
		}
	}
	else
	{
		cout<<c;
	}
	return 0;
}
