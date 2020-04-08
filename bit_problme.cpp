#include<iostream>

using namespace std;

 int sol(int num ,  int chng , int i , int j){
 int dif = j-i +1;
 int a = ((~0)<<dif);
 return a;


 }
int test(){
return ((~0)&(1<<5));


}


 int main(){
 int num;
 /*cout<<"Enter the number :";
 cin>>num;
 int change;
 cout<<"\nEnter the Value: ";
 cin>>change;
 cout<<"\nEnter the Position(1,j) : ";
 int i,j;
 cin>>i>>j;*/
 //cout<<sol(num, change, i, j);
cout<<test();
 return 0;
 }
