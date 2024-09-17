// Check a number is Armstrong Number or not 
#include <iostream>
using namespace std ;

int armstrong(int n){
	int sum = 0 ;
	int reminder ;
	while(n!=0)
	{
		reminder = n % 10 ; 
		n = n / 10 ; 
		sum = sum + (reminder*reminder*reminder);
	}
	return sum ; 
}

int main(){
	int n ; 
	cout<<"Enter Number to Check for Armstrong or not "<<endl;
	cin>>n;
	if(n==armstrong(n))
	{
		cout<<"Enter Number "<<n<<" is Amstrong"<<endl;
	}
	else 
	{
		cout<<"Enter Number "<<n<<" is Not Amstrong"<<endl;
	}
}
