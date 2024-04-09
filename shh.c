// #include <stdio.h>
// #include <math.h>
// #define MAX 100

// int kiemtrasohoanhao(int n)
// {
//     int sum = 0;

//     for (int i = 1; i < n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             sum = sum + i;
//         }
//     }
//     if (n == sum)
//         return 1;
//     else
//         return 0;
// }

// int main()
// {
//     int a[MAX];
//     int n, i;
//     printf("Nhap so luong phan tu mang : ");
//     scanf("%d", &n);

//     // input
//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     // xu li
//     printf("\nCac so hoan hao la: ");
//     for (int i = 0; i < n; i++)
//     {
//         if (kiemtrasohoanhao(a[i]) == 1)
//         {
//             printf("%d ", a[i]);
//         }
//     }
//     // vị trí số hoàn hảo ở cuối
//     printf("\nvi tri so hoan hao cuoi cung la: ");
//     for (int i = n - 1; i >= 0; i--)
//     {
//         if (kiemtrasohoanhao(a[i]) == 1)
//         {
//             printf("%d ", i);
//             break;
//         }
//     }
//     return 0;
// }

#include <stdio.h>
#include <math.h>
#define MAX 100

int kiemtrasohoanhao(int n)
{
    int sum = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (i == (n / i))
            {
                sum += i;
            }
            else
            {
                sum += (i + n / i);
            }
        }
    }

    if (n == sum && n != 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int vitrihoanhaocuoicung(int a[], int n)
{
    int index = -1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (kiemtrasohoanhao(a[i]))
        {
            index = i;
        }
    }

    return index;
}

void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

int main()
{
    int a[MAX];
    int n;
    int index;
    printf("Nhap so luong phan tu mang: ");
    scanf("%d", &n);
    nhap(a, n);
    index = vitrihoanhaocuoicung(a, n);
    printf("%d", index);
    return 0;
}