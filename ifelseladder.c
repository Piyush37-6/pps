// grading system
#include<stdio.h>
int main(){
 int marks;
   printf("enter the marks of a sublect");
 scanf("%d",&marks);
 if(marks>=90){
    printf("grade is A");

 }
 else if(marks>80){
    printf("grade is b");
 }
  else if(marks>70)
 {
    printf("grade is c");

 }
 else if (marks>=60)
{
    printf("grade is d");
}
 
else if(marks>=40)
{printf("grade is e");

}
else if(marks<=40)
{
    printf("grade is f");
}
}