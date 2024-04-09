#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, x, y;
    printf("Nhap a,b: ");
    scanf("%d %d", &a, &b);
    x = a;
    y = b;
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
            b -= a;
    }
    printf("UCLN = %d", a);
    printf("\nBCNN = %d ", (x * y) / a);
    return 0;
}
