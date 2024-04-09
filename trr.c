#include <stdio.h>

int deQui(int n)
{
    // Cho n=8;
    if (n == 1)
    {
        return 5;
    }
    else
    {
        return 2 * deQui(n / 2) + 3;
    }
}

int main(int argc, char const *argv[])
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("KET QUA = %d ", deQui(n));
    return 0;
}
