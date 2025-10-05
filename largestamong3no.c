#include<stdio.h>
int main()
{
    int x,y,z,max;
    printf("enter the valuer of x,yand z");
    scanf("%d%d%d",&x,&y,&z);
    max=(x>y)?(x>z?x:z):(y>z?:z);
    printf("the largest among the 3 is %d",max);
    return 0;
}