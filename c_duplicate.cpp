#include<iostream>
using namespace std;

int main(){
	char a[1000];
	cout<<"Enter the string: ";
	cin.getline(a,1000);
	int i=0;
	int j=1;
	while(a[j]!='\0'){
		if (a[j]==a[i]){
			j++;
		}
		else {
			cout<<a[i];
			i=j;
		}

	}
	cout<<a[--j];
	return 0;
}