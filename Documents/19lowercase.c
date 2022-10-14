#include <stdio.h>

int main()
{
	//97-122=a_z
	
	char ch;
printf("enter the character\n");
scanf("%c", &ch);
if(ch>=97 && ch<=122)
{
	printf("it is lowercase");
}
else
{
printf("it is not lowercase");
}
return 0;
}
