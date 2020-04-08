#include<iostream>

using namespace std;


void spiral(int a[][1000], int m ,int n){
 int sr=0;
 int sc=0;
 int ec=m-1;
 int er=n-1;

 while(sc<=ec and sr<=sc){

for(int i=sc; i<=ec ; i++){
	cout<<a[sr][i]<<",";
}
sr++;
for (int i=sr; i<=er ; i++){
	cout<<a[i][ec]<<",";
}
ec--;

if (er> sr){for(int i=ec; i>=sc ; i--){
	cout<<a[er][i]<<",";
}
er--;}

if (ec> sc){for (int i=er; i>=sr ; i--){
	cout<<a[i][sc]<<",";
}
sc++;}

 }

}

int main(){

	int n,m;
	cout<<"Enter row then column:";
	cin>>n>>m;
	int a[n][1000];
	int val=1;

cout<<"These are the "<<n*m<<" elements :\n";
for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
		a[i][j]=val;
		val++;
		cout<<a[i][j]<<" ";
	}
	cout<<endl;
}

spiral(a,m,n);


return 0;
}