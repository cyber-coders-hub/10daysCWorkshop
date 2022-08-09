#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,d;
	float b;
	char c;
	printf("Enter a number between 1 and 7 : ");
	scanf("%d",&a);
	fflush(stdin);

	printf("Enter a character ( y for yes and n for no)");
	scanf("%c",&c);
	fflush(stdin);
	
	printf("The value of a is %d\n",a);
	
	printf("Enter a floating point number : ");
	scanf("%f",&b);
	fflush(stdin);
	printf("The value of b is %f\n",b);
	
	printf("Enter a character : ");
	scanf("%c",&c);
	fflush(stdin);
	printf("The value of c is %c",c);
	
	if(a>90 && a<100)
	{
		printf("A+");
	}
	
	else if ( a>80 && a < 90)
	{
		printf("A");
	}
	
	else if(a>70 && a<80)
	{
		printf("B+");
	}
	
	else{
		printf("Fail");
	}
	
	if(a==1)
	{
		printf("\nHello");
		printf("\nHi I am Pawan");
	}
	
	else if(a==2)
	{
		printf("qwerty");
	}
	
	else{
		printf("\ntata");
		printf("\nasgasd");
	}
	
	printf("\nBye");


	if(a>80)
	{
		if(a<85)
		{
			printf("A");	
		}
		
		else if(a<90)
		{
			printf("Bye");
		}
		
		else{
			
		}
	}

	switch(a)
	{
			case 1:
			printf("Sunday");
			break;
		
		case 2:
			printf("Monday");
			break;
		
		case 3:
			printf("Tuesday");
			break;
			
		case 4:
			printf("Wednesday");
			break;
		
		case 5:
			printf("Thrusday");
			break;
			
		case 6:
			printf("Friday");
			break;
			
		case 7:
			printf("Saturday");
			break;
			
		default :
			printf("You entered incorrect number");
			break;
	}
	
	switch(c)
	{
		case 'y':
			printf("Hello");
			break;
		
		case 'n':
			printf("bye");
			break;
			
		default :
			printf("You entered incorrect character");
			break;
	}

	//Iteration Statements
	//For Loop

	for(d=0;d<5;--d)
	{
		printf("Hello");
	}
	
	//infinite for loop
	for(;;)
	{
		printf("Bye");
	}
	return 0;
}
