#include<iostream>

using namespace std;

void swap(int *a , int * b){
int temp =*a;
*a =*b;
*b=temp;
}

int main(){

	int arr[]={5,8,7,4,3,1,6,2};
	int n=sizeof(arr)/sizeof(int);

	//   Push The Largest element to the end 
	// Main ALgo
	for (int i=0 ; i<n;i++){
		
		for(int j=0 ; j<n-1-i;j++){

			if(arr[j]>arr[j+1])
				swap(arr[j+1],arr[j]);
		}

		for (int k =0 ; k<n ;k++){
			cout<<arr[k]<<" ";

		}
		cout<<endl;

	}
	return 0;
}