#include<iostream>

using namespace std;

int main(){

	int arr[]={1,2,3,-4,5,6,-7};
	int n = sizeof(arr)/sizeof(int);

	// Main Code
	int current_sum=0;
	int max_sum=arr[0];
	int left=0;
	int right=0;
	// cout<<n;

	for (int i=0; i<n ; i++){

		for(int j=i ; j<n ; j++){
				current_sum=0;
			for(int k=i ; k<=j ; k++){
				// count++;
				// cout<<arr[k]<<',';
				current_sum = current_sum + arr[k];
			}
			if( current_sum > max_sum){
				max_sum =current_sum;
				left=i;
				right=j;

			}
			
		}
	}
	cout<<"Max Sum in the sub array is : "<<max_sum<<endl;
	for(int i=left;i<=right;i++){
		cout<<arr[i]<<',';
	}
	return 0;
}