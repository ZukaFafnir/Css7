#include<stdio.h>
int main(){
	int n[5]={0,1,2,3,4,5};
	printf( "phan tu la so chan\n");
			
	for(int i=0;i<5;i++){
		if(n[i]%2==0){
			printf( " %d",n[i]);
			
		}
		
	}
	return 0;
}
