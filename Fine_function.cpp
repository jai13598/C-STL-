#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
	int arr[]={1,23,432,76,5};
	int n=sizeof(arr)/sizeof(int);
	int key=5;
	auto it=find(arr,arr+n,key);
	int index=it-arr;//finding for index because its contain address 
	if(index==n){
		cout<<"element is not found";
	}
	else{
		cout<<"element is found at index "<<index;
	}
	return 0;
}