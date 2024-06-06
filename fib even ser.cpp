#include <iostream>

using namespace std;

int main() {
    int n,a=0,b=1,next,i,sum=0;
    cout <<"number of terms";
    cin>>n;
    for (i=1;i<=n;++i) 
	{
        next=a+b;
        a=b;
        b=next;
        if(next%2== 0) 
		{
            sum+=next;
        }
    }
	cout << sum;
	return 0;
}

