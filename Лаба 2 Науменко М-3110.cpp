#include <math.h>
#include <stdio.h>

int main()
{
    float z1, z2, b1, b2;
    scanf_s("%f", &b1);
    scanf_s("%f", &b2);
    if ((b1 * b1 - 4) > 0)
    {
        z1 = (sqrt(2 * b1 + 2 * sqrt(b1 * b1 - 4))) / (sqrt(b1 * b1 - 4) + b1 + 2);
        printf("%f", z1);
    }
    else
    {
        printf("not decision");
    }
    printf("    ");
    if ((b2 + 2) > 0)
    {
        z2 = 1 / (sqrt(b2 + 2));
        printf("%f", z2);
    }
    else
    {
        printf("not decision");
    }
    return 0;
}
