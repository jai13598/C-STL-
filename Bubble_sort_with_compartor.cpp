#include<iostream>
using namespace std;
bool Compair(int a,int b){
	return a>b;
}
void Bubble_sort(int arr[10000],int n,bool (&camp)(int a,int b)){
	for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(camp(arr[j],arr[j+1])){
				swap(arr[j],arr[j+1]);
			}
		}
	}
}
int main()
{
	int n,arr[10000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	Bubble_sort(arr,n,Compair);
	for(int k=0;k<n;k++){
		cout<<arr[k]<<" ";
	}
	return 0;
}