#include<iostream>
#include<cstring>

using namespace std;

char * my_strtok(char * l , char del){
static char * input = NULL;

if (l!=NULL)
	 input = l;

if (input==NULL){
	return NULL;
}

char *output = new char[strlen(input) +1];

int i=0;
while(input[i]!='\0' ){
// cout<<input<<endl;
	if(input[i]!=del){
		output[i]=input[i];
		}
	else{
input[i]='\0';
output[i]='\0';
		input += i +1;
return output;
	}
	i++;
}

input=NULL;
output[i]='\0';
return output;
}



int main(){
	char line[100]="Today is a rainy day";
	cout<<line<<endl;
	char *ptr =my_strtok(line,' ');
	cout<<ptr<<endl;
	while(ptr!=NULL){
		ptr = my_strtok(NULL, ' ');
		cout<<ptr<<endl;
	}

	return 0;
}