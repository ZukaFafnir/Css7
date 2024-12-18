#include<stdio.h>
int main()
{ int n[5];

	
		for(int i = 1;i<=sizeof(n)/sizeof(int);i++){
	printf(" Moi ban nhap phan tu thu %d ",i);
	scanf("%d",&n[i]);}
	printf("Nhung mang vua nhap lan luot la\n");
	for(int i=1;i<=sizeof(n)/sizeof(int);i++){
		
		printf("%d  ",n[i]);
	}

	
		
		
		

	
	return 0;
}
