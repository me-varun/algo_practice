#include<iostream>
using namespace std;

int main(){
    // int arr[]={-4,1,-3,-2,6,2,-1,-4,-7,0};
    //Add Zero in the end of the array to get proper sub array
    int cs=0,ms=0;
    // int left =0 , right =0;
    int n,t;
    cin>>t;
    for(int x =0; x<t ; x++){

        cin>>n;
        int arr[n];
        
         for (int i=0 ; i<n ; i++){

            cs =cs + arr[i];
            if (cs<0){
                cs=0;
            }
            ms = max(cs,ms);
            // cout<<"\n"<<left<<'-'<<right;
     }
     cout<<ms<<endl;
}
    return 0;
}