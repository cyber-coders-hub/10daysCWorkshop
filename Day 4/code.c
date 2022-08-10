#include<stdio.h>

int main()
{
	int i = 0,a;
	scanf("%d",&a);
	
	a = i--;
	printf("%d\n",a);
	printf("%d\n",i);
	
	
	//while loop
	while(i<10)
	{
		i++;
		printf("Hello\n");
	}
	
	//do while loop
	do{
		printf("Bye\n");
		i=0;
		i++;
	}while(i<15);
	
	
	//break statement in loop
	for(i=1;i<10;i++)
	{
		if(i==2)
		{
			break;
		}
		printf("hello\n");
	}
	
	//break statement in switch case
	switch(a)
	{
		case 0:
			printf("\n0");
			break;
			
		case 1:
			printf("\n1");
			break;
			
		default :
			printf("\nYou entered incorrect number");
			break;
	}
	
	//continue statements
	for(i=0;i<10;i++)
	{
		if(i==5)
		{
			continue;
		}
		printf("%d\n",i);
		
	}
	
	//goto statement
	b:
		printf("Hello\n");	
	goto b;
	
	return 0;
}
