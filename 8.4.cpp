#include<stdio.h>

int main(){
	int arr[3][3]={
	{3,5,7},
	{9,4,8},
	{10,1,2}};
	int max=arr[0][0];
	for(int i=0 ; i<3 ; i++){
		for(int j=0 ; j<3 ; j++){
			if(max<arr[i][j]){
				max=arr[i][j];
			}
		}
	}
	printf("%d",max);
	
	return 0;
}
