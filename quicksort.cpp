#include<iostream>
using namespace std;

int partion(int *a , int s, int e){
    
    int i=s-1;
    int piviot = a[e];
    for(int j=s;j<e;j++){
        if(a[j]<=piviot){
            i++;
            swap(a[j],a[i]);
            
        }
        
    }
swap(a[e],a[i+1]);
        return i+1;
}

void quick(int * a , int s, int e){

    if(s>=e)
    return ;

    int p = partion(a,s,e);
    quick(a,s,p-1);
    quick(a,p+1,e);

}

int main(){

    int arr[] = {2,7,8,6,1,5,4 };
    int n = sizeof(arr)/sizeof(int);    
    quick(arr,0,n-1);
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl; 

    return 0;
}