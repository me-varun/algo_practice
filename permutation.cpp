#include<iostream>
using namespace std;

void permutate(char * a,int i){
if(a[i]=='\0'){
    cout<<a<<endl;
    return ;
}
for(int j=i;a[j]!='\0';j++){
    swap(a[i],a[j]);
    permutate(a,i+1);
    swap(a[i],a[j]);
    }



}

int main(){
    char a[] ="abc";
    permutate(a,0); 
    
    return 0;
}