#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num;
	
	printf("Enter an integer:");
	scanf("%i",&num);
	if(num<0)
	{
		printf("This is negative number.");
	}
	else if(num>0)
	{
		printf("This is positive number.");
	}
	else
	{
		printf("This is 0.");
	}
	
	return 0;
}
