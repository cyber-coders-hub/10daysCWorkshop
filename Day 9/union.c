#include<stdio.h>
#include<string.h>

union person{
	char name[40]; // 40
	int rollNo; // 4
};

struct person1{
	char name[40]; //40
	int rollNo; //4
};

int main()
{
	struct person1 p1;
	union person p2;
	
	//size of union and structure
	printf("The size of union is %d", sizeof(p2));
	printf("\nThe size of structure is %d", sizeof(p1));
	
	p2.rollNo = 15;
	printf("\nThe roll no of p2 is %d",p2.rollNo);
	
	strcpy(p2.name,"Pawan Bhatta");
	printf("\nThe name of p2 is %s",p2.name);
	printf("\nThe roll no of p2 is %d",p2.rollNo);
	
	return 0;
}
