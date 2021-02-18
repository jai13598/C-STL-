#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main(){
		char arr[]="XYZ";
		int n=strlen(arr);
		rotation(arr,arr+n);
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}