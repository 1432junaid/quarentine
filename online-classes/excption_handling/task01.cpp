#include<iostream>
using namespace std;

int main(){
	int age;
	int years;
	int salary;
	cout<<endl;
	cout<<"age:";
	cin>>age;
	cout<<"number of years working in the company:"<<endl;
	cin>>years;
	cout<<"salary:"<<endl;
	cin>>salary;
	start:
	try{
		if(age < 18 || age > 60)throw age;			//exception for age limitation
		if(years <= 0 || years > 42)throw years;		//exception for working years limitation
		int output = years*salary;
		cout<<output<<endl;
	}catch(int& a){
		cout<<a<<endl<<"!! note: of age[18 - 60 ] \n   note: years [0 - 42]"<<endl;
		cout<<"--------------"<<endl;
		cout<<"age:";
		cin>>age;
		cout<<"number of years working in the company:"<<endl;
		cin>>years;
		cout<<"salary:"<<endl;
		cin>>salary;
		goto start;
	}/*catch(int& b){
		cout<<b<<endl<<"!!working year not more than 42"<<endl;
		goto start;
	}*/
	return 0;
}
