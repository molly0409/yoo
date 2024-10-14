#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num,i;
	int sum=0;
	
	printf("Enter a number:");
	scanf("%i",&i);
	
	for(num=1;num<=i;num++){
		sum=sum+num;
	}
	printf("The result is %i",sum);
	
	return 0;
}
