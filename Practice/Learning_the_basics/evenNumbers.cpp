#include <iostream>
using namespace std;

int main(){
	int i = 0;
	for( i = 0 ; i<20; i++){

	// using if statement --->
		if(i%2==0){
			cout<<i<<endl;
		}
	
	// using continue keyword --->
		if(i%2==1){
			continue;
		}
		cout<<i<<endl;

	}	
}
