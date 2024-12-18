#include<stdio.h>
int main(){
	int number[5]={14,8,6,11,7};
	printf("list element new is\n");
	for(int i=0;i<5;i++){
		if(number[i]%2==0){
		number[i]+=3;
		printf("%d  ",number[i]);}
		else{number[i]+=2;
		printf("%d  ",number[i]);
		}
	}
	
	return 0;
}
	

