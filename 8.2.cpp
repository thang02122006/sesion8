#include<stdio.h>

int main(){
	int arr[2][3] ={{8,4,9},{1,5,2}}; 
	int b,i,j;
	int fasle=0;
	printf("nhap vao mot phan tu: ");
	    scanf("%d",&b);
    for( i=0 ; i<2 ; i++){
    	for( j=0 ; j<2 ; j++){
		if(arr[i][j]==b){
			printf("vi tri phan tu trong mang la arr[%d][%d]",i,j);
			fasle=1;
	        break;
	    }
		}
	 }
	 if(fasle==0){
	 	printf("khong hop le");
	 }

	
	return 0;
}

