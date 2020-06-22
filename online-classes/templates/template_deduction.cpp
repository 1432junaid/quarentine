#include<iostream>
#include<string>
using namespace std;
/*
template< typename T>void printer(const T t){
	cout<<t<<endl;
}
int main(){
	printer(3);		//if we not define type then it will implecitly call.
	printer(35L);		//or we can se this is automatic deduction coz jis type ka argument pass kia 
	printer('j');		//usko usne automatioc deduce kr ke pront kr dita
	string s = "Lucknow";
	int arr[] = {12,34,5,6,7,8,3};
	printer(s);
	printer(*(arr+1));
	return 0;
}
*/
template<typename T,typename S>T square(const S s){
	return s*s;
}
int main(){
	int x = square<int>(3);
	long ln = square<long>(89L);
	double d = square<double>(3.4);
	cout<<x<<" "<<ln<<" "<<d<<endl;
	return 0;
}
