#include<iostream>

using namespace std;


void binarysearch(int  arr[], int n ,int key){
int start = 0;
int end =n-1;
int mid;
// bool found = false;
while(start<=end){
	mid = (start+end)/2;
	// cout<<"The value of mid is :"<<mid;
	if( arr[mid] == key )
		{
			cout<<"\nfound key at :"<<mid;
			break;
		}
	else if (arr[mid]<key)
		start =mid+1;
	else if (arr[mid]>key)
		end=mid-1;
	if((start-end)==-1){
		cout<<"Key Not Found";
		// break;
	}}
}


int main(){
int n ,i;
  cout<<"Enter The number of elements ";
  cin>>n;
  int arr[n];
cout<<"Enter the elemnts of the array :\n";
  for (i =0;i<n;i++){
  
    cin >>arr[i];
     }

     cout<<"Enter The elemnt to be searched : ";
     int key;
     cin>>key;
     binarysearch(arr,n,key);


	return 0;
}