#include <iostream>
using namespace std;
int main() {
    int num,digit,sum=0;
	cout<< "Enter a number: ";
    cin>>num;
    while(num>0)
	 {
        digit=num%10;  
        sum+=digit;     
        num/=10;         
    }
	cout<<sum;
	return 0;
}




