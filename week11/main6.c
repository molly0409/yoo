#include <stdio.h>

void main(void) {
	FILE *fp=NULL;
	char c;
	
	fp=fopen("sample.txt","r");
	if(fp==NULL)
		printf("������ ������\n");
	//�ѱ��� ���� ���� ������ �������� �ƴϸ�
	while((c = fgetc(fp))!=EOF)
	{
		putchar(c);
	}
	//ȭ�鿡 �ѱ��� ���	
	fclose(fp);
}
