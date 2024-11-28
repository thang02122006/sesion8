#include<stdio.h>
#include<stdlib.h>

int main(){
	int arr[3][3]={
	{3,5,7},
	{9,4,8},
	{10,1,2}};
	int tong=0;
	for(int i=2 ; i>=0 ; i--){
		printf("%d\n",arr[abs(i-2)][i]);
		tong=tong+arr[abs(i-2)][i];	
	}
	printf("\n");
	printf("Tong cua duong cheo phu =%d",tong);
	
	return 0;
}
