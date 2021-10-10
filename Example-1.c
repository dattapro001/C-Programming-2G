#include <stdio.h>
#include <stdlib.h>
void main()
{
int s1,s2,s3,s4,Grade;
printf("Enter the marks of 4 subject:\n");
scanf("%d %d %d %d",&s1,&s2,&s3,&s4);
Grade=(s1+s2+s3+s4)/4;
if (Grade<50)
printf("Fail");
else
printf("Pass");
}
