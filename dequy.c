#include <stdio.h>

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return sum(n - 1) + n * n;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("%d", sum(n));
    return 0;
}
