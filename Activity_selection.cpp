#include<iostream>
#include<algorithm>
using namespace std;
bool Compair(pair<int,int> a, pair<int,int> b){
	return a.second<b.second;
}
int main() {
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		pair<int,int> arr[n];
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			arr[i]=make_pair(a,b);
		}
		sort(arr,arr+n,Compair);
		int Previous_select=0,ans=1;
		for(int i=1;i<n;i++){
			if(arr[Previous_select].second<=arr[i].first){
				ans++;
				Previous_select=i;
			}
		}
		cout<<ans<<endl;
		t--;
	}
	return 0;
}