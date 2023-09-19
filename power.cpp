#include <stdio.h>
#include <math.h>

int main() {
    int b;
    int c;

    printf("Enter the value: ");
    scanf("%d", &b);

    printf("Enter the  value: ");
    scanf("%d", &c);

    int power = pow(b, c);
    printf("%d", power);

    return 0;
}

