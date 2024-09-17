#include <iostream>
using namespace std ; 

bool isprime(int n){
	for(int i = 2;i <=n/2 ; i++ ){
		if(n%2==0){
			return false;
		}
	}
	return true;
}

int main(){
	int n ;
	cout<<"Enter Number to be checked"<<endl;
	cin>>n;
	
	if(isprime(n)){
		cout<<"Entered Number "<<n<<" is Prime";
	}
	else{
		cout<<"entered number "<<n<<"  is Not Prime";
	}
	
}

