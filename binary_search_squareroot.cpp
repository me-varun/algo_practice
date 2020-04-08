
#include<iostream>
using namespace std;
int main(){
int num;
cin>>num;
int final_ans;
//int i=0;
int ans = num;
int m ,s=1, e=num;
while(s<=e){
    m=(s+e)/2;
    if (ans>m*m){
        s=m+1;
        final_ans=m;
    }
    else if(ans<m*m){
        e=m-1;
        final_ans=m;
    }
    else
        break;

}
cout<<" : "<<final_ans;
return 0;
}
