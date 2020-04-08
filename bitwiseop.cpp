#include<iostream>

using namespace std;

int main(){

// Checking for repeate number in array when all number are repeating twice except 1 number

int n;
cin>>n;
int ans=0;
int num;
for(int i=0 ; i<n ; i++){
    cin>>num;
    ans = ans^num;
}
cout<<"Non Repeting number is : "<<ans;


return 0;
}
