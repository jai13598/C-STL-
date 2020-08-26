#include<iostream>
#include<list>
using namespace std;

template<class ForwordItretor,class T,class Campair>
ForwordItretor Search(ForwordItretor start,ForwordItretor end,T key,Campair camp){
	while(start!=end){
		if(camp(*start,key)){
			return start;
		}
		start++;
	}
	return end;
}
class Book{
public:
	string name;
	int price;
	Book(){

	}
	Book(string name,int price){
		this->name=name;
		this->price=price;
	}
};
class BookCompair{
public:
	bool operator()(Book A,Book B){
		if(A.name==B.name){
			return true;
		}
		return false;
	}
};
int main(){
	Book b1={"C++",100};
	Book b2={"Java",120};
	Book b3={"Python",130};
	list<Book> l;
	l.push_back(b1);
	l.push_back(b2);
	l.push_back(b3);
	Book key("Java",110);
	BookCompair cam;
	auto it=Search(l.begin(),l.end(),key,cam);
	if(it!=l.end()){
		cout<<"book is find ";
	}
	else{
		cout<<" book is not find";
	}
	return 0;
}