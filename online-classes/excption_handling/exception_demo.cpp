#include<iostream>
using namespace std;

int main(){
	int x,y;
	cout<<"x :";
	cin>>x;
	cout<<"y :";
	cin>>y;
	try{
		if(x < 0 || y < 0 ){
			throw(x<y)?x:y;
		}
		int z = x+ y;
		cout<<z<<endl;
	}catch(int& a){
		cout<<a<<" is less than 0"<<endl;
	}
}
