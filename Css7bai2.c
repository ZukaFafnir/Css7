#include<stdio.h>
int main()
{ int n[5]={3,5,3};
for(int i = 0;i<=sizeof(n)/sizeof(int);i++){

	printf(" Moi ban nhap phan tu thu %d ",i);
	scanf("%d",&n[i]);
	printf(" Phan tu thu %d la %d\n",i,n[i]);
	}	
	return 0;
}
