#include<iostream>
using namespace std;

int main(){
	
	int arr[5];
	cout<<"Enter array elements"<<endl;
	
	for(int i=0; i<5; i++){
		cin>>arr[i];		
	}
	
	for(int i=0;i<5;i++){
		cout<<"ARRAY ELEMENT "<<i+1<<" is :" <<arr[i]<<endl;
	}
	
	// size and length of an arry
	cout<<"size of array is "<<sizeof(arr)<<endl;
	cout<<"size of one element of array is : "<<sizeof(arr[0])<<endl;
	cout<<"length of an array is: "<<sizeof(arr)/sizeof(arr[0])<<endl;
	
	// Printing Elements of Array 
    cout<<"First element is " << *(arr+0)<<endl;
    cout<<"second element is " << *(arr+1)<<endl;
    cout<<"Third element is " << *(arr+2)<<endl;
    cout<<"Fourth element is " << *(arr+3)<<endl;
	
	
	
	
//  	1)Find out maximum element in an array
	
		// arr = { 12 , 23 , 44 ,2 , 9 }
		int max=arr[0];
		for(int i=0; i<5; i++){
				if(arr[i+1]>max){
				max = arr[i+1];
			}
		}
		cout<<"max element is : "<< max <<endl;
		
		
//		2)calculate average of all elements of an array using pointer
		
		int sum = 0 ;
		for(int i = 0 ; i < 5 ; i++){
			sum = sum + *(arr+i);
		}
		
		cout<< "Average is "<< sum/5 <<endl;
		
		cout<<"=================================================================="<<endl;

		
}
