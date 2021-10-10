#include<stdio.h>
#include<math.h>
void main()
{
int a,b,c;
int d;
int x1,x2;
scanf("%d%d%d",&a,&b,&c);
 d=abs(b*b-4*a*c);
 d=sqrt(d);
 printf("d=%d\n",d);
 x1=(-b+d)/(2*a);
 x2=(-b-d)/(2*a);
printf("X1=%d\nX2=%d\n");
}
