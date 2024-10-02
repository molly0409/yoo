#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int a,b;
	int x,y;
	
	printf("Input two integers: ");
	scanf("%i %i",&a,&b);
	
	x=a<<1;
	y=a>>1;
	
	printf("& result is %d\n",a&b);
	printf("| result is %d\n",a|b);
	printf("^ result is %d\n",a^b);
	printf("<<1 result is %d\n",x);
	printf(">>1 result is %d\n",y);
	
	return 0;
}
