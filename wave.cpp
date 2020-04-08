
#include<iostream>

using namespace std;
int main(){

// Pattern After Sorting should be a wave

//l 0 3 1 5 3 9 4 10 etc

int n;
cout<<"Enter size of array : ";
cin>>n;
int arr[n];
cout<<"\nEnter the elements :";
for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

        int i=1;
        while(i<n){
          if(arr[i-1]> arr[i])
                swap(arr[i-1],arr[i]);
          if(arr[i+1]> arr[i] && i<=n-2)
            swap(arr[i+1],arr[i]);
        i+=2;
        }
  for(int j=0 ; j<n ; j++){
    cout<<arr[j]<<" ";
  }

return 0;}
