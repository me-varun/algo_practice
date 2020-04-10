#include<iostream>
using namespace std;

int inc(int num){
    if (num==0){
        return 0;
    }
    inc(num-1);
    cout<<num<<" ";
    
    }


int dec(int num){
    if (num>0)
    {
        cout<<num<<" "; 
        return dec(--num);
    }

}

int main(){
    int num;
    cout<<"Enter the num till where you want the number : ";
    cin>>num;
    inc(num);
    cout<<endl;
    dec(num);
    
    return 0;
}