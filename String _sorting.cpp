#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	int n;
	cin>>n;
	cin.get();//for space 
	string s[1000];
	for(int i=0;i<n;i++){
		getline(cin,s[i]);
	}
	sort(s,s+n);
	for(int j=0;j<n;j++){
		cout<<s[j]<<" ";
	}
	return 0;
}