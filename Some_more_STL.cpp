#include<iostream>
#include<algorithm>
using namespace std;
int main(){	
	int a=10,b=12,c=20,k;
	int arr[]={1,2,39,34,4};
	cin>>k;
	swap(a,b);
	cout<<a<<" "<<b<<endl;
	cout<<max(a,b)<<endl;
	cout<<max(a,(b,c))<<endl;
	cout<<min(a,b)<<endl;
	string s="jai";
	reverse(s.begin(),s.end());
	cout<<s;
	reverse(arr,arr+k);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}