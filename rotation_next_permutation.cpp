#include<iostream>
#include<algorithm>
using namespace std;
int main(){
		int arr[]={1,23,53,0,34,400};
		int n=sizeof(arr)/sizeof(int);
		rotation(arr,arr+n);
		for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}