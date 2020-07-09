#include<iostream>
using namespace std;

int main(){
	int node;
	cout<<"Enter nodes:"<<endl;
	cin>>node;
	int matrix[node][node] = {0};
	for(int i = 0; i<node;i++){
		for(int j=0;j<node;j++){
			cout<<i+1<<"connected to "<<j+1<<"\t:";
			cin>>matrix[i][j];
		}
	}

	for(int i = 0; i<node;i++){
		for(int j=0;j<node;j++){
			cout<<matrix[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;

}
