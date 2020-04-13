#include<iostream>
using namespace std;

bool isSafe(int board[][10],int i,int j,int n){

    //check for column
    for(int k =i ; k>=0; k-- ){
        if (board[k][j]==1){
            return false;
        }
    }
    //check for right diagnol
    int x=i;
    int y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
    x--;
    y--;

    }
    //check for left diagnol
    x=i;
    y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
    x--;
    y++;

    }

    return true;
}

bool queen(int board[][10],int i , int n){

    if (i ==n){
    return true;
    //now just print it
    }
    //recursive call
    for(int j=0 ;j<n ; j++){
        //check if i,j is safe or not
        if(isSafe(board,i,j,n)){
            board[i][j]=1;

            bool next_q = queen(board,i+1,n);
            if(next_q)
            return true;

    }
    board[i][j]=0;
    
    }
    return false;
}

int main(){
    cout<<"Number : ";
    int n;
    cin>>n;
    int arr[10][10] = {0};
    if(queen(arr,0,n))
    {
        for(int i=0 ; i< n ; i++){
            for(int j=0 ; j<n ; j++){
                if(arr[i][j]==0)
                cout<<"_ ";
                else
                {
                    cout<<"Q ";
                }
                
            }
            cout<<endl;
        }
    }
    return 0;
}