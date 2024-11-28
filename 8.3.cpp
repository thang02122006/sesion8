#include<stdio.h>

int main(){
	int a;
	printf("moi ban nhap vào so nguyen a= ");
	scanf("%d",&a);
	int arr[a][a]={};
	for(int i=0 ; i<a ; i++){
		printf("\n");
		for(int j=0 ; j<a ; j++){
			arr[i][j]=a;
		    printf("%d ",arr[i][j]);
		}
	}


	return 0;
}
