#include <stdio.h>
int tinhtong(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
    }
    return s;
}
int main(int argc, char const *argv[])
{
    int n;
    double sum = 0;
    printf("n = ");
    scanf("%d", &n);
    int i = 1;
    while (n > 0)
    {
        sum = sum + (1 / (double)tinhtong(i));
        i++;
        n = n - 1;
    }
    printf("SUM = %.2lf ", sum);
    return 0;
}
