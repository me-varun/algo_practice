#include<iostream>

using namespace std;

int main(){
	int n,m;
	cout<<"Enter the number of rows : ";
	cin>>n;
	cin.get();
	cout<<"Enter the number of column : ";
	cin>>m;
    int arr[n][m];
	for(int i=0 ; i< n; i++)
        for(int j=0 ; j<m ; j++)
            cin>>arr[i][j];

    int sum;


 for(int i=n-1 ; i>=0; i--){
       // int c_sum = 0;
        for(int j=m-2 ; j>=0 ; j--)
            {
                arr[i][j]+=arr[i][j+1];
            }

 }

  for(int i=m-1 ; i>=0; i--){
        for(int j=n-2 ; j>=0 ; j--)
            {
               arr[j][i] += arr[j+1][i];
            }}


    int result = INT_MIN;



    for(int i=0 ; i< n; i++)
        {for(int j=0 ; j<m ; j++)
            result = max(arr[i][j],result);
        }
        cout<<"The Max Sum of the array is :"<<result;
    //cout<<"The sum of all the sub matrix is:"<<solution(arr,n,m)<<endl;

	return 0;
}
