#include<iostream>
using namespace std;

int decimal2binary(int num){
    int ans =0;
    int p =1;
    while(num>0){
        int lb = num&1;
        ans+=p*lb;
        p*=10;
        num = num>>1;

    }

    return ans;
}

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int ans = decimal2binary(num);

    cout<<"The Final ans is: "<<ans<<endl;

    return 0;
}