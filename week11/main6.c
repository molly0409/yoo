#include <stdio.h>

void main(void) {
	FILE *fp=NULL;
	char c;
	
	fp=fopen("sample.txt","r");
	if(fp==NULL)
		printf("파일을 못열음\n");
	//한글자 읽은 것이 파일의 마지막이 아니면
	while((c = fgetc(fp))!=EOF)
	{
		putchar(c);
	}
	//화면에 한글자 출력	
	fclose(fp);
}
