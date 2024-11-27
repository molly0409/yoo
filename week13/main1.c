#include <stdio.h>
#include <string.h>

struct student{
	int ID;
	char name[10];
	double grade;
};

int main(void) {
	
	struct student s1={24,"Cha",4.2};
	
	s1.ID=21;
	strcpy(s1.name,"Yoogaeun");
	s1.grade=4.3;
	
	printf("ID:%d\n",s1.ID);
	printf("ID:%s\n",s1.name);
	printf("ID:%f\n",s1.grade);

}
