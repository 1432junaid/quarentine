#include<iostream>
#include<vector>
#include<agorithm>
using namespace std;


int main()[
	vector<int>v1 = {1,3,5,6};
	vector<int>v2 = {2,4,6,8};
	vector<int>::iterator itr1 = v1.begin();
	vector<int>::iterator itr2 = v1.end();
	while(itr1 != itr2){
		cout<<*itr1<<endl;
		itr1++;
	}
	return 0;
}

void merge(vector<int>&v1 , vector<int>&v2){
	vector<int>::iterator itrv1 = v1.end();
	vector<int>::iterator itrv2 = v2.begin();
	vector<int>::iterator itrv22 = v2.end();
	whlie(itrv2 != itrv22){
		itrv1 = *itrv2;
		itrv1++;
		itrv2++;
	}
}
