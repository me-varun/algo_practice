#include<iostream>
#include"Vector.h"

using namespace std;

int main(){
Vector v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.pop_back();
v.push_back(5);
for(int i =v.front() ;i<=v.end() ;i++){
    cout<<v[i]<<" ";
}

return 0;
}
