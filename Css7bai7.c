#include<stdio.h>
int main(){
	int n;
	printf("Please enter the desired array size: ");
	scanf("%d",&n);
	int array[n];
	printf("Please enter the elements as odd numbers:\n");
	for(int i=0;i<n;){
		scanf("%d",array+i);
		if(array[i]%2==0){
			printf("Wrong!Please enter again\n");
			continue;
		}i++;
		
	}
	return 0;
}
