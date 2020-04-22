#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void printer(vector<int>);
vector<int> *merge(vector<int>, vector<int>);
int main(){
	vector<int>v1 = {1,3,5,7};
	vector<int>v2 = {2,4,6,8};
	printer(v1);
	printer(v2);
	cout<<v1.size()<<endl;
//	merge(v1,v2);
	vector<int > * v3;
	v3 = merge(v1,v2);
	vector<int>v3(v1.size() + v2.size() );
	cout<<v3.size();
	return 0;
}

vector<int> merge(vector<int>&v1 , vector<int>&v2){
	size_t c =  v1.size() + v2.size();
	vector<int>v3(c);
	cout<< v3.size();
	vector<int>::iterator itr1,itr2,itr3x1,itr3x2;
	itr1 = v1.begin();
	itr2 = v2.begin();
	itr3x1 = v3.begin();
	itr3x2 = v3.end();
	while(itr3x1 != itr3x2){
		if(*itr1 <= *itr2){
			itr3x1 = (*itr1);
			itr1++;
		}else{
			itr3x1 = (*itr2);
			itr2++;
		}
		itr3x1++;
	}
	return v3;

}

void printer(vector<int> v1){
	vector<int>::iterator itr1 = v1.begin();
	vector<int>::iterator itr2 = v1.end();
	while(itr1 != itr2){
		cout<<*itr1<<"\t";
		itr1++;
	}
	cout<<endl;
}
