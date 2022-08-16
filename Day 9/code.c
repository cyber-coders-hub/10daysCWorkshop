#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Declaration of structure
struct students{
	char name[30];
	int rollNo;
	int classNo;
};

int main()
{
	struct students s1, s2, s3; // Creating structure variables
	
	
	//Accessing members of structure students
	/*
	s1.rollNo = 12;
	s2.rollNo = 13;
	s3.rollNo = 14;
	
	s2.classNo = 12;
	printf("The roll no of student 1 , 2 , 3 is %d , %d , %d",s1.rollNo,s2.rollNo,s3.rollNo);
	printf("\nStudent 2 reads in class %d",s2.classNo);
	*/
	
	printf("\nEnter name of first student : ");
	gets(s1.name);
	fflush(stdin);
	
	printf("Enter rollno of first student : ");
	scanf("%d",&s1.rollNo);
	fflush(stdin);
	
	printf("Enter class of first student : ");
	scanf("%d",&s1.classNo);
	fflush(stdin);
	
	printf("\nEnter name of first student : ");
	gets(s2.name);
	fflush(stdin);
	
	printf("Enter rollno of first student : ");
	scanf("%d",&s2.rollNo);
	fflush(stdin);
	
	printf("Enter class of first student : ");
	scanf("%d",&s2.classNo);
	fflush(stdin);
	
	printf("\nName : %s",s1.name);
	printf("\nRoll no : %d",s1.rollNo);
	printf("\nClass : %d", s1.classNo);
	
	printf("\nName : %s",s2.name);
	printf("\nRoll no : %d",s2.rollNo);
	printf("\nClass : %d", s2.classNo);
	return 0;
}
