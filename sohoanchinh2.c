#include <stdio.h>

int main()
{
    int n;
    int s = 0;
    printf("n = ");
    scanf("%d", &n);
    printf("So hoan chinh nho hon %d la: ", n);
    for (int i = 1; i < n; i++)
    {
        s = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                s = s + j;
            }
        }
        if (s == i)
        {

            printf("%d ", i);
        }
    }

    return 0;
}