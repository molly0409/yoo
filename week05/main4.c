#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int year, a;
	
	printf("Input the year: ");
	scanf("%i",&year);
	a=((year%4==0)&&(year%100!=0))||(year%400==0);
	printf("Is the year %d the leap year? %d",year,a);
	
	return 0;
}
