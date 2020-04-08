#include<iostream>
#include<vector>

using namespace std;

int main(){

vector<int> v;
v.push_back(10);
v.push_back(12);
for(int x:v){
    cout<<x<<" ";
}


return 0;
}
