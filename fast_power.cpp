#include<iostream>
using namespace std;

int power(int a,int b){
if(b==0)
return 1;

int sa = power(a,b/2);
sa *=sa;

if (b&1){
    return a*sa;
}
else 
{
    return sa;
}
}

int main(){

int a=2;
int b=20;
cout<<power(a,b)<<endl;

    return 0;
}