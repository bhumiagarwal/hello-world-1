#include<stdio.h>
#include<string.h>
int main()
{
/* variable*/
char name[50], address[50];
int enroll;

/*Taking input*/
printf("Enter your name:");
gets(name);
printf("Enter your enrollment number:");
scanf("%d", &enroll);
printf("Enter your address:");
fflush(stdin);/*Clear whole data*/
gets(address);

/*Taking output*/
printf("Your name is: %s\n", name);
printf("Your enrollment number is: %d\n", enroll);
printf("Your address is: %s", address);
return 0;
}
