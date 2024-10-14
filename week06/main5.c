#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num1,num2;
	char cal;
	
	printf("Enter the calculation:");
	scanf("%i %c %i",&num1,&cal,&num2);
	
	if(cal=='+')
	{
		printf("=%i",num1+num2);
	}
	else if(cal=='-')
	{
		printf("=%i",num1-num2);
	}
	else if(cal=='*')
	{
		printf("=%i",num1*num2);
	}
	else if(cal=='/')
	{
		printf("=%i",num1/num2);
	}
	
	return 0;
}
