#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

struct student{
	int ID;
	int score;	
};

void main(void) {
	struct student s[STUDENTNUM];
	double sum=0;
	int i,j;
	int max,stumax;
	
	for(i=0;i<STUDENTNUM;i++)
	{
		printf("Input the ID:");
		scanf("%d",&s[i].ID);
		
		printf("Input the score:");
		scanf("%d",&s[i].score);			
	}
	
	max=s[0].score;
	
	for(j=0;j<STUDENTNUM;j++)
	{
		sum+=s[j].score;
		if(max<=s[j].score)
		{
			max=s[j].score;
			stumax=s[j].ID;
		}
		else
		{
			
		}	
	}
	
	printf("The average of the score: %f\n",sum/STUDENTNUM);
	printf("The highest score-ID:%d,score:%d",stumax,max);
}
