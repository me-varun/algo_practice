#include<iostream>
using namespace std;


void Toh(int n , char src,char hlpr ,char des){

if (n==0){
    return;
}
Toh(n-1,hlpr,des,src);
cout<<n<<" Moved from "<<src<<" to "<<des<<endl;
Toh(n-1,hlpr,src,des);
}

int main(){
int n;
cout<<"Enter the number of disc : ";
cin>>n;
Toh(n,'A','B','C');

    return 0;
} 