#include<stdio.h>
int main(){
	int number[5];
	printf("Please enter element:");
	for(int i=0;i<5;i++){
	scanf("%d",&number[i]);
	}
    int	numbermax=number[0],numbermin=number[0];
	for(int i=1;i<5;i++){
		if(numbermax>number[i]){
			numbermin=number[i];
		
		}else{numbermax=number[i];
		
		}
	}
	printf("Number max and number min is %d and %d ",numbermax,numbermin);
	return 0;
}

