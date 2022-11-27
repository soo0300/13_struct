#include <stdio.h>
#include <stdlib.h>
#define MAX_NAME 20

struct student{
	int ID;
	char name[MAX_NAME];
	double grade;
};

int main(void){
	struct student std1 = {1511104,"coco",4.3};

	
	std1.ID=1811103;
	strcpy(std1.name,"soojin");
	std1.grade=4.3;
	std1.grade=4.5;
		
	printf("ID: %i\n",std1.ID);
	printf("name: %s\n",std1.name);
	printf("grade: %.1f\n",std1.grade);

}
