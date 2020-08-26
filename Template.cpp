#include<iostream>
using namespace std;
template <typename T>

int Search(T *arr,int n,T key){
	for(int p=0;p<n;p++){
		if(arr[p]==key){
			return p;
		}
	}
	return n;
}
int main(){
	int arr[]={1,23,445,32};
	int n=sizeof(arr)/sizeof(int);
	int key=32;
	float arr1[]={1.12,23.43,45.00,320.123};
	int m=sizeof(arr1)/sizeof(float);
	float k=45.00;
	cout<<Search(arr,n,key)<<endl;
	cout<<Search(arr1,m,k)<<endl;
	return 0;
}