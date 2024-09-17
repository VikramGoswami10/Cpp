// fibonacci series 
// 0,1,1,2,3,5,8,13,21,34

#include <iostream>
using namespace std;
int fibonacci(int);
int main(){
	int a=0,b=1; 
	int fibo , n ;
	cout<<"enter the term of fibonacci to be printed"<<endl;;
	cin>>n; 
	
	/* 
	// ITERATIVE APPROACH --->
	
	cout<<"FIBONACCI SERIES IS : "<<a<<" "<<b<<" ";
	for(int i=2 ; i<n ; i++){
		fibo = a + b ;
		cout<<fibo<<" ";
		a = b ;
		b = fibo ;		
	}
	
	*/
	cout<<"FIBONACCI SERIES IS : "<<endl;
	for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";  // Print each Fibonacci number
    }	
    
}
// RECURSIVE APPROACH --->

int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base case: Fibonacci(0) = 0, Fibonacci(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
