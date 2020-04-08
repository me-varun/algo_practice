#include<iostream>

using namespace std;

int main(){

	int arr[]={1,2,3,4,5,6,7};
	int n = sizeof(arr)/sizeof(int);

	// Main Code
	int count=0;

	for (int i=0; i<n ; i++){

		for(int j=i ; j<n ; j++){

			for(int k=0 ; k<=j ; k++){
				count++;
				cout<<arr[k]<<',';


			}
			cout<<endl;
		}
	}
	return 0;
}