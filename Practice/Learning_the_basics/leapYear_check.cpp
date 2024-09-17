// check leap year or not 
//The year is a multiple of 400.
//The year is a multiple of 4 but not a multiple of 100.

#include <iostream>
using namespace std ; 

int main (){
	int yr ;
	cout<<"enter year to check leap or not "<<endl;
	cin>>yr;
	
	if((yr%400==0) || (yr%4==0&&yr%100!=0)){
		cout<<"leap year"<<endl;
	}
	else {
		cout<<"Not a leap year"<<endl;
	}
	
}
