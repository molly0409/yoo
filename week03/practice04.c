#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	float a;
	float b;
	float div;
	
	printf("enter two integers: ");
	scanf("%f,%f",&a,&b);
	
	div=a/b;
	printf("%f / %f = %f",a,b,div);
	
	return 0;
}
