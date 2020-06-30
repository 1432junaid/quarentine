#include<iostream>
#include<string>

using namespace std;
template<typename T>
class myclass{
	static int data;
	public:
	static void setdata(int a){
		data = a;
	}
	static int getdata(){
		return data;
	}
};
template<typename T> int  myclass<T>::data = 0;

int main(){
	myclass<int> m1;
	myclass<int >m2;
	myclass<string> m3;
	cout<<m1.getdata()<<endl;
	cout<<m2.getdata()<<endl;
	cout<<m3.getdata()<<endl;
//	cout<< mycalss::getdata()<<endl;		#error because of we r not declare type of the calls see the next line
	cout<< myclass<int >::getdata()<<endl;
	m1.setdata(20);
	cout<<m1.getdata()<<endl;
	cout<<m2.getdata()<<endl;
	cout<<m3.getdata()<<endl;
	return 0;
}
/*
the output will :


0
0
0
20		# m1 is set by the 20 then whole same type objects will be setby 20 excepet another class
20		# this this case the object m3 remains 0
0		//this will be 0 because the string class is not initilze or set by the 
*/
