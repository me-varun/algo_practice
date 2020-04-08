#include<iostream>

using namespace std;

void swap(int *a , int * b){
int temp =*a;
*a =*b;
*b=temp;
}

int main(){

	int arr[]={5,4,3,1,2};
	int n=sizeof(arr)/sizeof(int);

	//   Find the smallest element in the unsorted array and swap it with the one which is after the sorted array

	// Main ALgo
	for (int i=0 ; i<n;i++){
			int small =i;

		for (int j=i;j<n;j++){

			if(arr[j]<arr[small])
				small=j;

		}
		swap(arr[i],arr[small]);

		for(int k=0;k<n;k++)
			cout<<arr[k]<<" ";
			cout<<endl;
		
	}

	return 0;
}