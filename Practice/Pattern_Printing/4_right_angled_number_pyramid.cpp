/*
Pattern - 4: Right-Angled Number Pyramid - II
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6


*/
#include <iostream>
using namespace std ; 

void printPattern(int n){
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<=i ; j++){
			cout<<i+1<<" ";
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
