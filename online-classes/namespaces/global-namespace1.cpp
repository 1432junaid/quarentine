#include<iostream>
using namespace std;

extern void caller();		//function is by-default extern no matter

int main(){
	caller();
	return 0;
}
