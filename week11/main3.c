#include <stdio.h>
#include <string.h>

void main(void) {
	char scr[]="The worst things to eat before you sleep";
	char dst[100];
	
	strcpy(dst,scr);
	
	printf("copied string:%s",dst);
}
