#include<iostream>

using namespace std;
int solution(int **arr,int n, int m){
    int sum =0;
    for(int i=0 ; i<n; i++)
        {
            for(int j=0 ; j<m ; j++)
           {
               sum += arr[i][j] *((i+1)*(j+1)*(n-i)*(m-j));
           }
        }
        return sum;
    }

int main(){
	int n,m;
	cout<<"Enter the number of rows : ";
	cin>>n;
	cin.get();
	cout<<"Enter the number of column : ";
	cin>>m;
	int **arr = new int *[n];
	for(int i=0 ; i< n ; i++){
     arr[i] = new int [m];
	}
	for(int i=0 ; i< n; i++)
        for(int j=0 ; j<m ; j++)
            cin>>arr[i][j];
    cout<<"The sum of all the sub matrix is:"<<solution(arr,n,m)<<endl;

	return 0;
}
