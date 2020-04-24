#include<iostream>
#include<cstdio.h>
#include<cmath.h>
void printer(int *,int);
void permu(int *,int);
void swap(int*,int*);
int sum_arr(int *,int);

int main(){
	int a[] = {1,2,3};
	int len = sizeof(a)/sizeof(a[0]);
	int result = sum_arr(a,len);
	printf("%d\n",result);
//	permu(a,len);
//	printf("%d\n",sum_arr(a,len) );
//	result = pow(10,3);
//	result = sum_arr(a,len);
//	printf("%d\n",result);
	return 0;

}

void permu(int a[],int len){
	vector<int>v1;
	for(int i; i<len ;i++){
		for(int j = 1;j <= len; j++){
			for(i = 0; i< len-1; i++){
				swap(&a[i], &a[i+1]);
			//	printer(a,len);
				sum_arr(a,len);
			}
		}
	}
}

void printer(int a[],int len){
	for(int i= 0; i<len; i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}

void swap(int *a,int *b){
		int temp;
		temp 	= *a;
		*a 	= *b;
		*b	= temp;
}

int sum_arr(int a[],int len){
	int sum1 = 0 ;
	int m = len;
	for(int i =0; i<len; i++,m--){
		int res = pow(10 , m);
		sum1 += a[i] * res;
	}
	return sum1;
}


