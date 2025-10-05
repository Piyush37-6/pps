#include<stdio.h>
int main()
{
    float r, l, b, area;
    char shape;
    printf("Enter options: c for circle, r for rectangle, s for square\n");
    scanf(" %c", &shape); // Note the space before %c

    switch(shape)
    {
        case 'c':
            printf("Enter the radius of the circle\n");
            scanf("%f", &r);
            area = 3.14159 * r * r;
            printf("Area of circle is = %f\n", area);
            break;
        case 'r':
            printf("Enter the value of length and breadth\n");
            scanf("%f%f", &l, &b);
            area = l * b;
            printf("Area of rectangle is = %f\n", area);
            break;
        case 's':
            printf("Enter the value of length\n");
            scanf("%f", &l);
            area = l * l;
            printf("Area of square is = %f\n", area);
            break;
        default:
            printf("Invalid option\n");
    }
    return 0;
}