#include<iostream>
using namespace std;
int max_profit(int arr[],int len){
	int max=1,min=0;
	for(int i=0;i<len;i++){
		for(int j=i+1;j<len;j++){
			if(arr[j]-arr[i] > (arr[max]-arr[min])){
				max = arr[j] - arr[i];
			}
		}
	}
	return max;
}
int main(){
	int arr[] = {100,500,30,50,996};
	int len = sizeof(arr)/sizeof(arr[0]);
	int profit = max_profit(arr,len);
	cout<<"max profit :"<<profit<<endl;
	return 0;
}
