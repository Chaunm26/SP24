#include <stdio.h>

// int sum(int n)
// {
//     int sum = 0;
//     for (int i = 1; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("%d ", i);
//             sum += i;
//         }
//     }
//     return sum;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("N = ");
//     scanf("%d", &n);
//     printf("\nSum = %d", sum(n));
//     return 0;
// }

int sHCN(int a, int b)
{
    int s = 0;
    s = a * b;
    return s;
}
int cHCN(int a, int b)
{
    int c = 0;
    c = a + b;
    return c;
}
int main(int argc, char const *argv[])
{
    int a, b;
    printf("Nhap a ");
    scanf("%d", &a);
    printf("Nhap b ");
    scanf("%d", &b);
    printf("Dien tich HCN = %d", sHCN(a, b));
    printf("\nChu vi HCN = %d", cHCN(a, b));

    return 0;
}
