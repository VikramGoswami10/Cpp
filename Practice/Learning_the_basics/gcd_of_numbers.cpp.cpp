// greatest common divisor or HCF
#include <iostream>
using namespace std ; 

int greatestCommonDivisor(int num1,int num2)
{
	int gcd = 1 ;
/*	
	// checking i from 1 till i = min(num1,num2)
	
	for(int i = 1;i<=min(num1,num2);i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd = i ;
		}
	} 
		
*/
//  checking i = min(num1,num2) to 1 
// min becoz gcd cannot be more than smaller number btw two numbers.

	for(int i = min(num1,num2);i>0;i--)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd = i ;
			break;
		}
	}

	return gcd ;
}
int main(){
	int n1 , n2;
	cout<<"Enter numbers to find GCD/HCF : "<<endl;
	cin>>n1>>n2;
	cout<<"GCD/HCF of "<<n1<<" & "<<n2<<" is : "<<greatestCommonDivisor(n1,n2);
}
