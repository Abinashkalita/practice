#include <stdio.h>

int main()
{
int a,b,c,d;
printf("enter the four numbers : ");
scanf("%d %d %d %d",&a,&b,&c,&d);

if(a>b && a>c && a>d)
{
printf("%d is the greatest of the four numbers",a);
}
else if(b>a && b>c && b>d)
{
printf("%d is the greatest of the four numbers",b);
}
else if(c>a && c>b && c>d)
{
printf("%d is the greatest of the four numbers",c);
}
else if(d>a && d>b && d>c)
{
printf("%d is the greatest of the four numbers",d);
}
return 0;
}
