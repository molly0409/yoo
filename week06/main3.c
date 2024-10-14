#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int num=0;
	int c;
	
	printf("Input a string:");
	
	while((c=getchar())!='\n')
	{
		if(c>=48 && c<=57)
		{
			num++;
		}
		else
		{
		}
	}
	printf("The number of digits is:%i",num);
	
	return 0;
}
