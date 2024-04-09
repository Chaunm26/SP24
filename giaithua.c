#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i;
    int t = 1;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        t = t * i;
    }

    printf("%d! = %d", n, t);

    return 0;
}
