#include <stdio.h>

int get_integer()
{
	int a;
    printf("Enter the value:");
	scanf("%i",&a);
	return(a);
}

int factorial(int n)
{
	int res=1;
	int i;
	for(i=1;i<=n;i++)
	{
		res=res*i;
	}
	return res;
}

int combination(int n,int r)
{
	return(factorial(n)/(factorial(n-r)*factorial(r)));
}

int main(void) {
	
	int n,r,result;
	n=get_integer();
	r=get_integer();
	
	result=combination(n,r);
	printf("The result of C(%i,%i) is result %i.",n,r,result);

}
