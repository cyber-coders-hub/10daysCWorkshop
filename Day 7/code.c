#include<stdio.h>
#include<string.h>

int main()
{

	char name[20]= "PawanBhatta"; // Declaration and initialization of string
	char firstName[15];
	char email[25]="abc@gmail.com";
	char password[15]="12345678";
	char uemail[20];
	char upass[15];

	gets(uemail);
	gets(upass);
	
	//Different ways to read strings from user
	scanf("%s",firstName);
	fgets(firstName,sizeof(firstName), stdin);
	gets(firstName);
	
	//Different ways to print strings to user
	printf("%s\n", name);
	printf("\n%s", firstName);
	puts(name);
	
	//use of strlen
	printf("%d", strlen(name));
	
	//use of strcpy
	strcpy(firstName,name);
	printf("\n%s",firstName);
	
	//use of strcmp
	printf("\n%d", strcmp(name,firstName));
	
	if(strcmp(uemail,email)==0 && strcmp(upass,password)==0)
	{
		printf("You have successfully been logged in");
	}
	
	else{
		printf("You entered incorrect credentials");
	}
	
	//use of strcat
	strcat(email,password);
	printf("%s",email);
	
	//use of strlwr
	strlwr(name);
	printf("\n%s",name);
	
	//use of strupr
	strupr(name);
	printf("\n%s",name);
	
	return 0;
	
}
