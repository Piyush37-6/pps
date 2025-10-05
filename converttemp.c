#include<stdio.h>
int main(){
    float c,f;
    printf("enter the temp in celsious\n");
    scanf("%f",&c);
    f=(c*9.0/5)+32;
    printf("enter the temprature in farenhite\n");
    scanf("%f",&f);
    c=(f-32)*(5.0/9);
    printf("%f celsious is %f faranhite",c,f);
    printf("%f fraranhiet is %f celsious",f,c);

}