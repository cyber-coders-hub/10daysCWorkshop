#include<stdio.h>

struct person{
	int citNo;
};

int main()
{
	struct person *person1Ptr , person1;
	person1Ptr = &person1;
	
	person1Ptr->citNo = 2000;
	
	printf("%d",person1Ptr->citNo);
	printf("\n%d",person1.citNo);
	
	char name[50];
	int citNo;
	int salary;
	return 0;
}
