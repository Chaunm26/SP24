#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int i;
    int s = 0;
    printf("n = ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            s += i;
        }
    }
    if (s == n)
    {
        printf("\n%d la so hoan chinh", n);
    }
    else
    {
        printf("\n%d la so khong hoan chinh", n);
    }

    return 0;
}
