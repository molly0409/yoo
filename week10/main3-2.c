#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void) {
	int i;
	int a[SIZE]={1,2,3,4,5};
	int b[SIZE]={1,2,3,7,10};
	int flag_same=1;
	
	for(i=0;i<SIZE;i++)
	{
		if(a[i]==b[i])
			printf("Both arrays have same value\n");
		else
			printf("%d\n",i);
	}
	return 0;
}