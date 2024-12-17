#include<stdio.h>
int main()
{ int n[]={3,5,3};
for(int i = 0;i<sizeof(n)/sizeof(int);i++){

	printf(" Phan tu thu %d la %d\n",i,n[i]);
	}	
	printf(" Do dai cua mang la %d ",sizeof(n)/sizeof(int));
	return 0;
}
