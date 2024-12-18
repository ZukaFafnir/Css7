#include <stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Please enter the desired array size: ");
	scanf("%d",&n);
	int array[n];
	printf("Please enter the elements of array:\n");
	for(int i=0;i<n;i++){
		scanf("%d",array+i);
		}
		int check;
	for(int i=0;i<n;i++){
	     check=0;
	     if(array[i]==1){
	         check=1;
	     }
		for(int j=2;j<= sqrt(array[i]);j++){
			if(array[i]%j==0){
				check=1;
				break;
			}
				
		}
	    
		if(check==0){
			printf("This number %d is Prime number\n",array[i]);}
		    }
		
	
	return 0;
}
