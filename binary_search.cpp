#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int arr[]={1,2,3,4,6,7,7,7,8,98};
	int n=sizeof(arr)/sizeof(int);
	int key=7;
	bool a=binary_search(arr,arr+n,key);
	if(a==true){
		cout<<"Element is  present "<<endl;
	}
	else{
		cout<<"Element is not present "<<endl;
	}
	auto it=lower_bound(arr,arr+n,key);//if key is not found then print next address of element which is greater than key
	cout<<(it-arr)<<endl;//and if key is occued multiple time then fist time occued address print 
	auto t=upper_bound(arr,arr+n,key);//if key is not found then print next address of element which is greater than key
	cout<<(t-arr)<<endl;//and if key is occued multiple time then last time occued address print
}