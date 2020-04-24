#include<stdio.h>
#include<math.h>
void printer(int *,int);
void permu(int *,int);
void swap(int*,int*);
int sum_arr(int *,int);
int main(){
	int a[] = {1,2,3};
	int len = sizeof(a)/sizeof(a[0]);
	printer(a,len);
	int result;
//	printf("\n");
//	permu(a,len);
//	printf("%d\n",sum_arr(a,len) );
//	result = pow(10,3);
	result = sum_arr(a,len);
	printf("%d\n",result);
	return 0;

}/*
void permu(int a[],int len){
	int arr[len];
	for(int i =0; i<len; i++){
		int arr[i] = a[i];
	}
	for(int i =0; i < len ; i++ ){
		int key = arr[i];
		arr[0] = key;
		for(int j = len-1; j >= 1; j--){
			swap(&a[j],&a[j-1]);
			printer(a,len);
		}
	}
}*/
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
	int sum = 0 ;
	for(int i =0; i<len; i++,len--){
		int res = pow(10,len);
		sum += a[i] * res;
	}
	return sum;
}

