#include<stdio.h>
int main(){
	int row,column;
	printf("Please enter the number of rows and columns of a two-dimensional array:  ");
	scanf("%d%d",&row,&column);
	int array[row][column];
    printf("Please enter the elements:\n");
	for(int i=0;i<sizeof(array)/sizeof(array[0]);i++){
		for(int j=0;j<column;j++){
			printf("[%d][%d] of array is: ",i,j);
			scanf("%d",&array[i][j]);
			
		}
	}
	printf("The values of the elements are:\n");
	for(int i=0;i<row;i++){
		for(int j=0;j<column;j++){
			if(i==0||i==row-1||j==0||j==column-1){
				printf("%d",array[i][j]);
			}else{
				printf(" ");
			}
		}
		printf("\n");

	}
	return 0;
}
