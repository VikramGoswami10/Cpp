// Find the Largest element in an array

#include <iostream>
using namespace std ; 
#include<array>

int largestElement(int arr[]){
	int len = arr.size();
	int max = arr[0];
	
	for(int i=1 ; i<;i++){
		if(max<arr[i]){
			max = arr[i];
		}
	}
	return max ;
}

int main(){
	int size ;
	cout<<"enter size of an array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter elements of array"<<endl;
	for(int i=0 ; i<size;i++){
		cin>>arr[i];
	}
	cout<<"Array is : ";
	for(int i=0 ; i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	
}
