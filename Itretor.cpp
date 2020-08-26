#include<iostream>
#include<list>
using namespace std;
template<class ForwordItretor,class T>
ForwordItretor Search(ForwordItretor start,ForwordItretor end, T key){
	while(start!=end){
		if(*start==key){
			return start;
		}
		start++;
	}
	return end;
}
int main(){
	list<int> l;
	l.push_back(1);
	l.push_back(5);
	l.push_back(3);
	l.push_back(7);
	l.push_back(9);
	auto it=Search(l.begin(),l.end(),23);
	if(it==l.end()){
		cout<<"Enlement not found";
	}
	else{
		cout<<*it;
	}
	return 0;
}