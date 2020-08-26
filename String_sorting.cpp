#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool compare(string a,string b){
	return a.length()<b.length();
}
int main(){
	int n;
	cin>>n;
	cin.get();//for space 
	string s[1000];
	for(int i=0;i<n;i++){
		getline(cin,s[i]);
	}
	//sort(s,s+n);//lexographical sort 
	sort(s,s+n,compare);
	for(int j=0;j<n;j++){
		cout<<s[j]<<endl;
	}
	return 0;
}