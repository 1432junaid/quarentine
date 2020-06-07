/*copy control 
	copy  constructor +  destructor + asssingment
	1 .copy constructor

*/
#include<iostream>
using namespace std;
class myclass{
	public:
	int age;
	char gender;
	myclass():age(10),gender('M'){}			//direct initialization
	myclass(int a,char m){
		age =a ;
	//	gender =m;
	}
};

int main(){
	myclass m;
	myclass m1(22,'F');				//
	myclass m2= myclass(25,'M');
	myclass* m3 = new  myclass(23,'f');
	myclass m4;
	m4 = m1;
	m4 = m;
	m  = m4;
	m4 = *m3;
	cout<<m4.age<<"  "<<m4.gender<<endl;
	return 0;

}
