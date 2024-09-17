// factorial of number
// fact --> 5 = 5X4X3X2X1 ;  
#include <iostream>
using namespace std;
int fact(int n);
int main(){
	int n ; 
	cout<<"enter number for Factorial"<<endl;
	cin>>n;
	
/*
	// iterative approach
	
	int fact = 1;
	for(int i = 1 ; i<=n;i++){
		fact = fact*i;
	}
	cout<<"Factorial is : "<<fact;

*/

	cout<<"Factorial is : "<<fact(n);
	
}

// recursive function 
int fact(int n ){
	
	if(n==0 || n==1){
		return 1;
	}
	else{
		return n*fact(n-1);
	}
}
