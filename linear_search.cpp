#include<iostream>
using namespace std;

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

     //Linear Search

     for(i=0 ; i<n; i++){
     	// cout<<arr[i];
     	if (arr[i]==key){
     		cout<<"Found at key index:"<<i<<endl;
     		break;
     		  	}
     		}
     if (i==n)
     	{cout<<"Value not Found";}
 
}