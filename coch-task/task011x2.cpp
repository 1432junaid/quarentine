#include<iostream>
using namespace std;

int  div_no_oprtr(int dividend,int divisor){
	return (dividend/divisor);
}

int main(){
	int x,y;
	cout<<"dividend :";
	cin>>x;
	cout<<"divisor :";
	cin>>y;
	cout<<div_no_oprtr(x,y)<<endl;
	return 0;
}
