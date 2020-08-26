#include <iostream>
#include<string>
using namespace std;
int main() {
    string s="I LOVE C++ ";
     string s1("C++ ");// string s1="C++";
    if(s.empty()){
        cout<<"Empty "<<endl;
    }
    else{
        cout<<"Not Empty "<<endl;
    }
    s.append("and Python ");
    cout<<s<<endl;
    s.append(s1);
    cout<<s<<endl;
    cout<<s1.length()<<endl;
    s1.clear();
    cout<<s1.length()<<endl;
    cout<<s.compare(s1)<<endl;//if 0 then equal other wise ><0;
    cout<<s.compare(s)<<endl;
    //overloaded opreator
    if(s==s1){
    	cout<<"equal"<<endl;
    }
    else{
    	cout<<"Not equal"<<endl;
    }
    if(s>s1){
    	cout<<"s"<<endl;
    }
    else{
    	cout<<"s1"<<endl;
    }
    //substring 
    string a="I want apple Juice";
    int index=a.find("apple");
    cout<<index<<endl;
    //erase a word
    cout<<a<<endl;
    string word="apple";
    int length=word.length();
    a.erase(index,length+1);
    cout<<a<<endl;
    return 0;
}
