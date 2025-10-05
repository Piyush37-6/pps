#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a); // Only input for 'a'

    b = a + a++; // Post-increment: b gets original value of a, then a is incremented

    printf("ans is a=%d and b=%d\n", a, b); // Output updated a and original b
    return 0;
}