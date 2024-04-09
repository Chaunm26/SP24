#include <stdio.h>

#define MAX 100

void nhapMang(int a[MAX], int *n)
{
    printf("n = ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++)
    {
        printf("a[%d] =  ", i);
        scanf("%d", &a[i]);
    }
}
void xuatMang(int a[MAX], int n)
{

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
void Sum(int a[], int n)
{
    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }
    printf("Tong = %d", tong);
}
int main(int argc, char const *argv[])
{
    int a[MAX];
    int n;
    int i;
    nhapMang(a, &n);
    xuatMang(a, n);
    Sum(a, n);

    return 0;
}
