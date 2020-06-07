#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;

void display(vector<int>);
int max_coseq_len(vector<int>);

int main(){
	vector<int> a = {100,4,200,1,3,2};
	display(a);
	return 0;
}

void display(vector<int> a){
	vector<int>::iterator itr1 = a.begin();
	vector<int>::iterator itr2 = a.end();
	while(itr1 != itr2){
		cout<<*itr1<<"\t";
		itr1++;
	}
	cout<<endl;
}
int max_coseq_len(vector<int> a){
	int count = 0;
	for(int i =0 ; i< a.size(); i++){
		if(a[i] == a[i+1] -1)max++;
	}
}
