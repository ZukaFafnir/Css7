#include<stdio.h>
int main(){
	int number[5];
	printf("Please enter element:");
	for(int i=0;i<5;i++){
	scanf("%d",&number[i]);
	}
    int	numbermax=number[0],numbermin=number[0],c=0;
	for(int i=1;i<5;i++){
		if(number[i]>numbermax){
			numbermax=number[i];
		}
		if(number[i]<numbermin){
			numbermin=number[i];
		}
	}
		
	
	
	printf("Number max and number min is %d and %d ",numbermax,numbermin);
	return 0;
}

