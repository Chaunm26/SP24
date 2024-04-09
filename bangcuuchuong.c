#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int n, k;
    // printf("Nhap n = ");
    // scanf("%d", &n);
    // printf("Nhap k = ");
    // scanf("%d", &k);

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 2; j <= 9; j++)
        {
            printf("%dx%d=%d", j, i, i * j);
            // printf("\n%dx%d=%d", j, i, i * j);

            printf("\t");
        }
        printf("\n");
    }
    return 0;
}
