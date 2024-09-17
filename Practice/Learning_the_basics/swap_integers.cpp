#include <iostream>
using namespace std; 
void swapTwo(int &,int &);
void swapNum(int *,int *);
int main(){
	int a , b ; 
	cout<<"enter first number : "<<endl;
	cin>>a;
	cout<<"enter second number : "<<endl;
	cin>>b;
	cout<<"Before swaping numbers are : "<<a<<" "<<b<<endl;
	
	/*
	
	first method 
	a=a+b;  
	b=a-b; 
	a=a-b; 
	cout<<"After swaping numbers are : "<<a<<" "<<b<<endl;
	
	*/
			 
	//swapTwo(a,b);
	
	swapNum(&a,&b);
	cout<<"After swaping numbers are : "<<a<<" "<<b<<endl;
	
	return 0 ;
}

// using reference ---> second method
void swapTwo(int &a , int &b){
	int temp = a;
	a = b;
	b = temp ; 
}

// using pointers ---> third method
void swapNum(int *a,int *b){
	int temp = *a;
	*a = *b ; 
	*b=temp;
}
