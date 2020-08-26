#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
		int arr[]={1,23,53,0,34,400};
		int arr1[]={1,2,3};
		int m=sizeof(arr1)/sizeof(int);
		vector<int> v{1,23,53,0,34,400};
		int n=sizeof(arr)/sizeof(int);
		int k;
		cin>>k;
		rotate(arr,arr+k,arr+n);
		rotate(v.begin(),v.begin()+k,v.end());
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}	
		cout<<endl;
		for(int x:v){
			cout<<x<<" ";
		}
		cout<<endl;
		next_permutation(v.begin(),v.end());
		for(int x:v){
			cout<<x<<" ";
		}
		cout<<endl;
		int c=0;
		while(next_permutation(arr1,arr1+m)){
			for(int i=0;i<m;i++){
				cout<<arr1[i]<<" ";
			}
			cout<<endl;
		}

}