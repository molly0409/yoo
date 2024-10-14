#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("Enter an integer:");
	scanf("%i",&num);
	
	if(num<0)
	{
		printf("%i",-1*num);
	}
	else
	{
		printf("%i",num);
	}
	
	return 0;
}
