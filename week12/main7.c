#include <stdio.h>

char *proverb="All that gliters is not gold";

void setPointer(char **q)
{	
	*q=proverb;	
}
int main(void) 
{
	char *p="zzz";
	char **t=&p;

	setPointer(&p);
	printf("%s\n",p);
	
	return 0;
}
  
