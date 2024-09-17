// Table Printing 
#include <iostream>
using namespace std;

int main(){
	
	int n; 
	cout<<"Enter number"<<endl;
	cin>>n;
	cout<<"Multiplication table --> "<<endl;
	for(int i = 1 ; i<=10 ; i++){
		cout<<n<<"X"<<i<<" = "<<n*i<<endl;
	}
	return 0;
}
