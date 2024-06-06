#include <iostream>
using namespace std;
int main() 
{
  int n,rev=0,rem,palin;
  cout << "Enter an integer: ";
  cin >> n;
  n=palin;
while(n != 0) 
  {
    rem=n%10;              
    rev=rev*10+rem;
    n /= 10;                         
  }

  cout << "Reversed Number"<<rev;
if (palin==rev){
	cout<< " The number is a palindrome";}
else{

    cout<< " The number is not a palindrome";}
return 0;
}

