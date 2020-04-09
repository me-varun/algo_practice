#include<iostream>


using namespace std;

void prime_series(int * arr, int n){
    for(int i=2 ; i< n ; i++){
        if(arr[i]!=-1){
            for(int j =i*i ; j<n ; j+=i){
                arr[j] = -1;
            }

        }
        
    }
    for(int i = 2 ; i<n ;i++)
    {
        if(arr[i]!=-1)
        cout<<arr[i]<<" ";
    }
}

int main(){

    cout<<"Enter a numer for Prime series : ";
    int num;
    cin>>num;
    int *arr = new int [num-3];
    for(int i =2 ; i<num ; i++)
        arr[i] = i;
     
    prime_series(arr,num);



    return 0;
}