#include<iostream>
#include<algorithm>
using namespace std;
bool Compair(int x,int y){
	return x<=y;
}
int main(){
	int coin[]={1,2,5,10,20,50,100,200,500,2000};
	int n=sizeof(coin)/sizeof(int);
	int money=134;
	while(money>0){
		auto it=lower_bound(coin,coin+n,money,Compair);
		int  a=it-coin-1;
		cout<<coin[a]<<",";
		money=money-coin[a];
	}
}