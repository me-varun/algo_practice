#include<iostream>
#include<cstring>
using namespace std;

int main(){

	char a[1000];
	cout<<"Enter a string : ";
	cin.getline(a,1000,'\n');
	int i=0;
	int j=strlen(a)-1;
	bool ans =true;
	// cout<<i<<j;
	while(i<j){
		if(a[i]==a[j]){
			// cout<<i<<j;
			i++;
			j--;
		}
		else
			{
				cout<<"Not a Palindrome";
				ans=false;
					break;
				}
	}
	if(ans){
		cout<<"Palindrome";
	}

return 0;

}