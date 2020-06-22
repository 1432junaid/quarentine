#include<iostream>
#include<string>
using namespace std;

template<int x,int y>			//non-type parameter
//template<const int x,const int y>	//this can be done but it is default constant
class myclass{
	int a,b;
	public:
	myclass():a(x),b(y){}
	void print_values(){
		cout<<a<<"  "<<b<<endl;
	}
};

int main(){
	const int q = 5;
//	int p = 4;			//if we pass p then ill will be error becaouse it is not constant
	const int p =4;
	myclass<q,p> m;			//variable  must be constant
//	myclass<7,9> m;
	m.print_values();
	return 0;
}
