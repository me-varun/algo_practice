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

	//   concept of SOrted array and unsorted array

	// Main ALgo
	int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  

        for (int k=0 ;k<n ; k++){
        	cout<<arr[k]<<" ";
        }
        cout<<endl;
    }  

	return 0;
}