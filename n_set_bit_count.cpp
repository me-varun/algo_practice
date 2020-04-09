#include<iostream>
using namespace std;

int first_method(int num){
    int ans=0;
        while(num>0){
        int lb = num &1;
       if (lb==1)
        ans++;
        num = num>>1;

    }
    return ans;
}

int second_method(int num){

    int ans=0;

    while(num>0){
        num= num&(num-1);
        ans++;
    }
    return ans;
}
int main()
{
    //Count all the ones in binary representation of the number
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int ans= first_method(num);


    cout<<"The answer from 1st method is :"<<ans<<endl;
ans=second_method(num);
cout<<"The answer from 2nd method is :"<<ans<<endl;
cout<<"The answer from inbuild  method is :"<<__builtin_popcount(num)<<endl;


   return 0;  
} 
//For 123 ans:6