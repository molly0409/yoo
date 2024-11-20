#include <stdio.h>

void main(void) {
	FILE *fp=NULL;
	char c[15];
	int i=0;
	
	fp=fopen("sample.txt","w");
	for(i=0;i<3;i++)
	{
		printf("input the word:");
		scanf("%s",&c);	
		fprintf(fp,"%s\n",c);			
	}
		
	fclose(fp);
}
