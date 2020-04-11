#include<iostream>

using namespace std;
int arr[]= {1,2,3,4,5,6,7,8,9,0,12};

int find_ (int k, int i, int n){
    if(arr[i]==k){
        return i;
    }
if(n==i){
    return -1;
}
i++;
find_(k,i,n);

}

int main(){
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    int f = find_(key,0,n);
    if(f>=0){
        cout<<"The object is at :"<<f<<endl;
    }
    else
    {
        cout<<"Not found"<<endl;
    }
    
    return 0;
}