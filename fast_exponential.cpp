#include<iostream>
using namespace std;

//find a^n in log(n) time


int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enter the power :";
    int p;
    cin>>p;
    cout<<num<<" ^ "<<p;
    int val=num;
    num=1;
    while(p>0){
        
        if(p&1){
            num*=val;
 
        }
    p = p>>1;
    val*=val;

    }
    cout<<" is :"<<num<<endl;

    return 0;
}