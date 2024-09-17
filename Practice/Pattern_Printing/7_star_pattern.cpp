/*
Pattern - 7: Star Pyramid

 	 *     
    ***    
   *****   
  *******  
 *********  
row = 5 , col = 9
*/
#include <iostream>
using namespace std ; 

void printPattern(int n){
	for(int i=0 ; i<n ; i++){
		// For printing the " " space before star
		for(int j=0 ; j<=n-i-1 ; j++){
			cout<<" ";
		}
		// For printing the stars
		for(int j=0 ; j<(2*i+1) ; j++){
			cout<<"*";
		}
		cout<<endl;
	}
}

int main(){
	int n ; 
	cout<<"Enter Number of Rows "<<endl;
	cin>>n;
	cout<<"Pattern --->"<<endl;
	cout<<endl;
	printPattern(n);
}
