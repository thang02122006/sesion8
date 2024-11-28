#include<stdio.h>

int main(){
	int arr[3][3]={
	{3,5,7},
	{9,4,8},
	{10,1,2}};
	int t;
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
		    t+=arr[i][j];
			}
		}
	printf("%d",t);
	
	return 0;
}
