#include <stdio.h>

void main(void) {
	FILE *fp=NULL;
	char c[20];
	
	fp=fopen("sample.txt","r");
	if(fp==NULL)
		printf("파일을 못열음\n");

	while(fgets(c,20,fp)!=NULL)
	{
		printf("%s",c);
	}	
	fclose(fp);
}
