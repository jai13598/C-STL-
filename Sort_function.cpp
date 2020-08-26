#include<iostream>
#include<algorithm>
using namespace std;
bool Compair(int a,int b){
	return a>b;
}
int main()
{
	int n,arr[10000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	sort(arr,arr+n,Compair);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}