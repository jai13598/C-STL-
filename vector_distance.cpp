#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool Compair(pair<int,int> p1,pair<int,int> p2){
	auto d1=p1.first*p1.first+p1.second*p1.second;
	auto d2=p2.first*p2.first+p2.second*p2.second;
	if(d1==d2){
		return p1.first<p2.first;
	}
	return d1<d2;
}
int main(){
	int n;
	cin>>n;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++){
		int x,y;
		cin>>x>>y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin(),v.end(),Compair);
	for(auto a:v){
		cout<<a.first<<","<<a.second<<endl;
	}
	return 0;
}