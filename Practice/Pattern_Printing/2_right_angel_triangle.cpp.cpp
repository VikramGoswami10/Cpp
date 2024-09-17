/*	 
Pattern-2: Right-Angled Triangle Pattern

			* 
			* * 
			* * *
*/

#include <iostream>
using namespace std ; 

void printPattern(int n){
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<=i ; j++){
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
