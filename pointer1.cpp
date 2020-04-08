#include<iostream>
using namespace std;

int main(){

  int a =10;
  cout<<&a<<endl;

  char b ='a';
  cout<<&b<<endl;
  //Explicit type Casting
  cout<<(void *)&b;
     return 0;
}