#include <iostream>
using namespace std ; 

int main(){
	int arr[5];
	cout<<"enter array elements "<<endl;
	for(int i=0;i<5;i++){
		cin>>arr[i];
	}
	cout<<"Array is "<<endl;
	for(int i =0;i<5;i++){
		cout<<arr[i]<<endl;
	}
	
	// Different Notions
	cout<<"first element of array : "<<*arr<<endl;
	cout<<"second element of array : "<<*(1+arr)<<endl;
	cout<<"third element of array : "<<*(arr+2)<<endl;
	
	// ptr pointer pointing to base of arr
	int* ptr = arr ; 
	cout<<"first element of array : "<<*ptr<<endl;
	
	for(int i = 0 ; i<5;i++){
		ptr[i]=ptr[i]+1;
	}
	cout<<"Array after ptr operation is "<<endl;
	for(int i =0;i<5;i++){
		cout<<arr[i]<<endl;
	}
	while
}
