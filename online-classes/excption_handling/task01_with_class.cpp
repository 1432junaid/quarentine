#include<iostream>
using namespace std;

class employee{
	int age;
	int no_of_years;
	public:
	int get_set_age();
	int get_set_years();
};
int employee::get_set_age(){
	cin>> this->age;
	try{
		if(this->age < 18 || this->age > 60)throw age;					//condition  for exception
	}catch(int& a){
		cout<<"!! age must be :[18 - 60]"<<endl;	//exception msg
		this->get_set_age();				//recurssion
	}
	return this->age;
}
int employee::get_set_years(){
	cin>>this->no_of_years;
	try{
		if(this->no_of_years < 0 || this->no_of_years > 42)throw no_of_years;		//condition for exception
	}catch(int& a){
		cout<<"!! years must be :[0 - 42]"<<endl;	//exception msg
		this->get_set_years();				//recursion
	}
	return this->no_of_years;
}
int main(){
	employee e1;
	int age = e1.get_set_age();
	int years =e1.get_set_years();
	cout<<(age * years)<<endl;
	return 0;
}
