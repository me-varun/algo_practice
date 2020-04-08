#include<iostream>
using namespace std;

void increment(int * aptr){
  *aptr = *aptr +1;
  cout<<"Value of a in outer function : "<<*aptr<<endl;

}

int main(){
  int a=10;
  increment(&a);
  cout<<"Value in the main Function : "<<a;

/*
  char a = 'B';
  //Not Allowed
  int * aptr = &a; 
  cout<<aptr;
  */

  return 0;
}