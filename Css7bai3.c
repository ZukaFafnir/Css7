#include<stdio.h>
int main(){
	int number[5]={7,0,5,0,1},check=0;
	for(int i=0;i<5;i++){
		if(number[i]%2==0){
			check++;}
		}if(check>0){
		for(int i=0;i<5;i++){
			if(number[i]%2==0){
			printf("%d   ",number[i]);}
			}
		}else{
			printf("Mang khong co so chan ");
		}	
		return 0;
		}
		
		
	
	
	
	
	



