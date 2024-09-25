#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	char character_1;
	char next;
	int num;
	int num2;
	
	printf("enter a character: ");
	scanf("%c" ,&character_1);
	
	num=character_1;
	num2=num+1;
	next=character_1 + 1;
	
	printf("the next character of %c (%i) is %c (%i)", character_1,num,next,num2);
	
	return 0;
}
