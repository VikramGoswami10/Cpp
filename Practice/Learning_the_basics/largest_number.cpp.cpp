// largest number 
#include <iostream>
using namespace std;

int main(){
	int a , b , c ; 
	cout<<"enter numbers : "<<endl;
	cin>>a>>b>>c;
	
	if(a>b&&a>c){
		cout<<"A is greater"<<endl;
	}
	else if(b>a&&b>c){
		cout<<"B is greater"<<endl;
	}
	else{
		cout<<"C is greater"<<endl;
	}

}
