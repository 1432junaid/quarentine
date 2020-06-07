#include<iostream>
#include<algorithm>
using namespace std;

void display(int [],int);
int count(int [],int);
int count1(int [],int);
int main(){
	int arr[] = {6,8,100,5,200,1,3,7,2};
	int len = sizeof(arr)/sizeof(arr[0]);
//	display(arr,len);
	sort(arr,arr+len);
	display(arr,len);
	cout<<count1(arr,len)<<endl;
	cout<<endl<<count(arr,len)<<endl;
	return 0;
}

void display(int arr[],int len){
	for(int i = 0; i < len ; i++ ){
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
}

int count(int arr[],int len){
	int count = 1;
	for(int i = 0 ; i < len; i++){
		int max = 1;
		if(arr[i] == (arr[i+1] - 1) ){
			max++;
		}
		cout<<max<<endl;
		count = max ? max<count : max>count;
	}
	return count;
}

int count1(int arr[],int len){
	int count = 1;
	int max = 1;
	for(int i = 0 ; i < len; i++){
		max =  1;
		if(arr[i] == (arr[i+1] - 1) ){
		max ++;
		cout<<max<<arr[i]<<endl;
		}
		count = max ? (max >=count) : count;
	}
	return count;
}
