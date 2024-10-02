#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int second;
	
	printf("Input the second: ");
	scanf("%i",&second);
	printf("The time is %d : %d",(second/60),(second%60));
	
	return 0;
}
