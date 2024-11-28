#include<stdio.h>

int main(){
	int arr[3][3]={
	{3,5,7},
	{9,4,8},
	{10,1,2}};
	int tong;
	for(int i=0 ; i<3 ; i++){
		printf("%d\n",arr[i][i]);
		    tong+=arr[i][i];
		}
	printf("Tong cua duong cheo chinh =%d",tong);
	
	return 0;
}
