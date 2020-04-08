#include<iostream>
using namespace std;

int main(){
	
	//Given Sorted array find the pair that add up to k=16

	int arr[] = {1,3,5,6,7,8,8,10,11,12,13,16};
	int k=16;
	int i=0;
	int j = (sizeof(arr)/sizeof(int) )-1;
	while(i<=j){
		if(arr[i]+arr[j] == k){
			cout<<arr[i]<<'+'<<arr[j]<<"="<<k<<endl;
			i++;
			j--;
		}

		else if(arr[i] + arr[j] < k){
			i++;
		}
		else
			j--;

	}

	return 0;
}