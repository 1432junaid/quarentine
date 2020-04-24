#include<iostream>
#include<vector>
using namespace std;

void all_permu(vector<int >);
void printer(vector<int >);
int main(){
	vector<int > set = {1,2,3};
	printer(set);
//	vector<int >::iterator itr = set.end();
//	itr = itr-1;
//	cout<<*itr<<endl;
	all_permu(set);
	return 0;
}
//
void all_permu(vector<int > &set){
	vector<int >::iterator itra = set.begin();
	vector<int >::iterator itrb = itra+1;
	vector<int >::iterator itrc = set.end();
	itrc--;
	int temp;
	while(itra != itrc ){
		while(itrb != itrc){
			temp = *itrc;
			itrc = *itrb;
			itrb = temp;
			itrc--;
			itrb++;
			printer(set);
		}
		itra++;
	}
}

void printer(vector<int > set){
	vector<int >::iterator itr1 = set.begin();
	vector<int >::iterator itr2 = set.end();
	while(itr1 != itr2){
		cout<<*itr1<<"\t";
		itr1++;
	}
	cout<<endl;
}
