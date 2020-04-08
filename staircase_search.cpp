#include<iostream>

using namespace std;

int main(){

	int n,m;
	cout<<"Enter row then column sorted: ";
	cin>>n>>m;
	int arr[n][m];
	for(int i =0; i<n ; i++){
		for(int j=0 ; j<m ; j++){
			cin>>arr[i][j];
			}
	}
	int k;
	cout<<"Enter the key value to be searched :";
	cin>>k;
	int i=0;
	int j=m-1;
while (i<=n and j>0){
	if(arr[i][j]==k){
		cout<<"Key Found at index"<<i<<" "<<j<<endl;
		break;
		}
	else if(arr[i][j]<k){
		i++;
	}
	else 
		j--;
}


	return 0;
}