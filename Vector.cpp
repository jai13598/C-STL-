#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v1;
	v1.reserve(1000);
	vector<char> v2;
	vector<float> v3;
	vector<int> v4(5,10);//5 int with 10 value
	vector<int> v5{1,2,3,4};
	for(int i=0;i<v4.size();i++){
		cout<<v4[i]<<" ";
	}
	cout<<endl;
	for(auto it=v4.begin();it!=v4.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
	for(auto x:v4){
		cout<<x<<" ";
	}
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		int no;
		cin>>no;
		v1.push_back(no);
	}
	cout<<endl;
	v1.pop_back();//remove last element 
	for(auto x:v1){
		cout<<x<<" ";
	}
	cout<<endl;
	v1.insert(v1.begin()+2,4,100);
	for(auto x:v1){
		cout<<x<<" ";
	}
	cout<<endl;
	v1.insert(v1.begin()+5,390);
	for(auto x:v1){
		cout<<x<<" ";
	}
	cout<<endl;
	v1.erase(v1.begin()+2);
	for(auto x:v1){
		cout<<x<<" ";
	}
	cout<<endl;
	v1.erase(v1.begin()+3,v1.begin()+8);
	for(auto x:v1){
		cout<<x<<" ";
	}
	v1.clear();
	cout<<endl;
	cout<<v1.size()<<endl;
	if(v1.empty()){
		cout<<"v1 is empty"<<endl;
	}
	return 0;

}
	