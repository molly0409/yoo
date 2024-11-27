#include <stdio.h>

/*struct point{
	int x;
	int y;
};
int getArea(struct point p1,struct point p2);

int main(int argc, char *argv[]) {

	struct point p1,p2;
	int Area;

	printf("Input the coordinate p1(x y):");
	scanf("%d %d",&p1.x,&p1.y);
	printf("Input the coordinate p2(x y):");
	scanf("%d %d",&p2.x,&p2.y);
	
	Area=getArea(p1,p2);
	printf("Area:%d",Area);
	return 0;
}

int getArea(struct point p1,struct point p2)
{
	int ar;
	ar=(p2.x-p1.x)*(p2.y-p1.y);
	if(ar<0)
	{
		ar=-ar;
	}
	else
	
	return ar; 
}*/

struct point{
	int x;
	int y;
};
int getArea(struct point *pPtr1,struct point *pPtr2);

int main(int argc, char *argv[]) {

	struct point p1,p2;
	struct point *pPtr1,*pPtr2;
	pPtr1=&p1;
	pPtr2=&p2;
	
	int area;

	printf("Input the coordinate p1(x y):");
	scanf("%d %d",&p1.x,&p1.y);
	printf("Input the coordinate p2(x y):");
	scanf("%d %d",&p2.x,&p2.y);
	
	area=getArea(pPtr1,pPtr2);
	printf("Area:%d",area);
	return 0;
}

int getArea(struct point *pPtr1,struct point *pPtr2)
{
	int ar;
	ar=(pPtr2->x-pPtr1->x)*(pPtr2->y-pPtr1->y);
	if(ar<0)
	{
		ar=-ar;
	}
	else
	
	return ar; 
}
