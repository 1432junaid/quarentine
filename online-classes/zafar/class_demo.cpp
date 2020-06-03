#include<iostream>
using namespace std;

struct student_info{
	int age ;
	int marks ;
	char name[50];
};

int main(){
	student_info s1,s2;
	s1.age =20;
	s2.age = 21;
	s1.marks = 300;
	s2.marks = 400;
	return 0;
}

