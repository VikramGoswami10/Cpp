/*
Pattern-5: Inverted Right Pyramid

* * * * * *
* * * * * 
* * * * 
* * * 
* * 
*

*/
#include <iostream>
using namespace std ; 

void printPattern(int n){
	for(int i=0 ; i<n ; i++){
		for(int j=n ; j>i ;j-- ){
			cout<<"* ";
		}
		cout<<endl;
	}
}

int main(){
	int n ; 
	cout<<"Enter Number of Rows "<<endl;
	cin>>n;
	cout<<"Pattern --->"<<endl;
	printPattern(n);

}
