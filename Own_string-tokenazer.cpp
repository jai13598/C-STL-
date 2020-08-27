#include<iostream>
#include<cstring>
using namespace std;
char *own_strtok(char *str,char delim){
	static char *input=NULL;
	if(str!=NULL){
		input=str;
	}
	if(input==NULL){
		return NULL;
	}
	int i=0;
	char *output=new char[strlen(input)+1];
	for(;input[i]!='\0';i++){
		if(input[i]!=delim){
			output[i]=input[i];
		}
		else{
			output[i]='\0';
			input=input+i+1;
			return output;
		}
	}
	output[i]='\0';
	input=NULL;
	return output;
}
int main(){
	char s[100]="C++ is a strongh language";
	char *ptr=own_strtok(s,' ');
	cout<<ptr<<" ";
	while(ptr!=NULL){
		ptr=(own_strtok(NULL,' '));
		cout<<ptr<<" ";
	}

	return 0;
}