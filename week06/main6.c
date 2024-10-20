#include <stdio.h>

int main(int argc, char *argv[]) {
	int answer=36;
	int num,i=0;
	
	do
	{
		printf("Guess a number:");
		scanf("%i",&num);
		i++;
		if(num<answer)
		{
			printf("low!\n");
		}
		else if(num>answer)
		{
			printf("High!\n");
		}
		else
			break;
	}
	while(num<answer || num>answer);
	
	printf("Congratulation! Trials:%i",i);
	
	return 0;
}
