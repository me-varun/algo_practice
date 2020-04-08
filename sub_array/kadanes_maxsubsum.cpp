#include<iostream>
using namespace std;

int main(){
	int arr[]={-4,1,-3,-2,6,2,-1,-4,-7,0};
	//Add Zero in the end of the array to get proper sub array
	int cs=0,ms=0;
	int left =0 , right =0;
	int n= sizeof(arr)/sizeof(int);
	 for (int i=0 ; i<n ; i++){

	 		cs =cs + arr[i];
	 		if (cs<0){
	 			cs=0;

	 			if (arr[i+1]>ms) // Adding zero because of this line (avoid garbage value)
	 				left = i+1;
	 			
	 		}
	 		if (cs> ms){
	 			right = i;

	 		}
	 		ms = max(cs,ms);
	 		// cout<<"\n"<<left<<'-'<<right;
	 }
	 cout<<"Max Sum is :"<<ms<<endl;
	 // cout<<left<<"--"<<right;
	 for (int i = left; i <=right; i++)
	 {
	 	cout<<arr[i]<<",";
	 }


	return 0;
}