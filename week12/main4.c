#include <stdio.h>

int main(void) {
	
	int i;
	int ave=0;
	int grade[5];
	int *ptr;
	ptr=grade;
	
	for(i=0;i<5;i++)
	{
		printf("Input vaule - grade[%i]=",i);
		scanf("%d",&grade[i]);
	}
	
	for(i=0;i<5;i++)
	{
		ptr[i]=*(ptr+i);
		ave+=ptr[i];
		printf("grade[%d]=%d\n",i,ptr[i]);
	}
	printf("%d",ave/5);
	
	return 0;
}
