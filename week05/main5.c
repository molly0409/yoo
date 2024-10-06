#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a,b;
	
	printf("Input two integers: ");
	scanf("%i %i",&a,&b);
	
	printf("& result is %d\n",a&b);
	printf("| result is %d\n",a|b);
	printf("^ result is %d\n",a^b);
	printf("<<1 result is %d\n",a<<1);
	printf(">>1 result is %d\n",a>>1);
	
	return 0;
}
