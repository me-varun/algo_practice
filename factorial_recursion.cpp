#include<iostream>

using namespace std;

int fact(int num){
    if (num==0)
    {return 1;}

    else {
        int ans = num*fact(num-1);
    return ans;
}}
int main(){
    int num=5;
    cout<<fact(num)<<endl;
    return 0;
}