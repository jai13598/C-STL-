#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
class Car{
public:
	string car_name;
	int x,y;
	Car(){

	}
	Car(string n,int x,int y){
		car_name=n;
		this->x=x;
		this->y=y;
	}
	int distance(){
		return x*x+y*y;
	}
};
bool Compair(Car a, Car b){
	if(a.distance()==b.distance()){
		return a.car_name.length()<b.car_name.length();
	}
	return a.distance()<b.distance();
}
int main(){
	int n;
	vector<Car> v;
	cin>>n;
	for(int i=0;i<n;i++){
		string name;
		int x,y;
		cin>>name>>x>>y;
		Car temp(name,x,y);
		v.push_back(temp);
	}
	sort(v.begin(), v.end(),Compair); 
	for(auto ad:v){
		cout<<ad.car_name<<" "<<ad.x<<","<<ad.y<<endl;
	}
	return 0;
}