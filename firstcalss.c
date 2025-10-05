#include<stdio.h>
int main()
{
int a,b;
// a=5.3;
// b=8.4;
// printf("sum of the two is %f",a+b);//the %d is the integer specifier
// printf("hello world"); /*for printing enything written*/
// prntf("the size of integer is %d",sizeof(int));
printf("enter the two opperand");
scanf("%d",&a);//& used to assign value &a means adress of a
b=a++;
printf("ans is a=%d and b=%d",a,b);
return 0;
}