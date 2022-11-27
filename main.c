#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME 20
int main(int argc, char *argv[]) {
	struct student{
		int ID;
		char name[MAX_NAME];
		double grade;			
	};
	
	int main(void){
		struct student std1;
		//struct student std2 = {1511104,"coco",4.3};
	
		
		std1.ID=1811103;
		strcpy(std1.name,"soojin");
		std1.grade=4.3;

	}
	
	return 0;
}
