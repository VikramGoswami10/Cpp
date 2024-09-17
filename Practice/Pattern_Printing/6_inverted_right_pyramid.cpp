/*
Pattern - 6: Inverted Numbered Right Pyramid

1 2 3 4 5 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1

*/
#include <iostream>
using namespace std ; 

void printPattern(int n){
	for(int i = n ; i > 0 ; i--){ 
		for(int j=0;j<i;j++){
			cout<<j+1<<" ";
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
