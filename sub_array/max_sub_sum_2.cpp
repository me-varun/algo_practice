#include<iostream>

using namespace std;

int main(){

	int arr[]={-4,1,3,-2,6,2,-8,-9,4};
	int n = sizeof(arr)/sizeof(int);
	int c_sum[n]={arr[0]};
	// Main Code
	int current_sum=0;
	int max_sum=arr[0];
	int left=0;
	int right=0;
	cout<<c_sum[0]<<'-';
	for(int i=1 ; i<n ; i++){
		c_sum[i] =c_sum[i-1] +arr[i];
		cout<<c_sum[i]<<"-";
	}
	cout<<endl;

	for (int i=0; i<n ; i++){

		for(int j=i ; j<n ; j++){
			current_sum =c_sum[j] -  c_sum[i-1];
			if (current_sum>max_sum){
				max_sum=current_sum;
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