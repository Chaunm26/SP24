#include <stdio.h>
#include <ctype.h>
#include <string.h>

// int main(int argc, char const *argv[])
// {
//     int x[5] = {1, 2, 3, 4, 5};
//     int u;
//     int *ptr = x;
//     *(ptr + 3) = 10;
//     for (int u = 0; u < 5; u++)
//     {
//         printf("%d ", x[u]);
//     }

//     return 0;
// }

// void show(int *b)
// {
//     printf("%d ", *b);
// }

// int main(int argc, char const *argv[])
// {
//     int i;
//     int a[4] = {23, 34, 45, 56};
//     for (int i = 0; i < 3; i++)
//     {
//         show(&a[i] + 1);
//     }

//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int x = 3, k = 0;
//     while (x - 1)
//     {
//         ++k;
//         x--;
//     }
//     printf("%d", k);
//     return 0;
// }
// int main(int argc, char const *argv[])
// {
//     int i = 5;
//     printf("%d", i = ++i == 6);

//     return 0;
// }

// void foo(int *p, int q)
// {
//     *p = *p * *p;
//     q = q * q;
// }
// int main()
// {
//     int p = 3, q = 4;
//     foo(&p, q);
//     printf("%d %d", p, q);
//     printf("\n");
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     while (1)
//     {
//         printf("Hello");
//     }

//     return 0;
// }

#include <stdio.h>

void nhapMang(int a[], int *n)
{
    printf("Nhap so luong phan tu mang : ");
    scanf("%d", n);
    for (int i = 0; i < *n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}

void xuatMang(int a[], int n)
{
    printf("Gia tri cua mang la : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
// khong su dung con tro
void themVaoCuoiMang(int a[100], int *n, int m)
{
    // int size = sizeof(a) / sizeof(a[0]); ///????
    // if (n == size)
    // {
    //     printf("Khong the them vao mang !");
    // }
    a[*n] = m;
    (*n)++;
}

// void themVaoDauMang(int a[100], int n, int m)
// {
//     int size = sizeof(a) / sizeof(a[0]); ///????
//     if (n == size)
//     {
//         printf("Khong the them vao mang !");
//     }
//     n++;
//     for (int i = n - 1; i > 0; i--)
//     {
//         a[i] = a[i - 1];
//     }
//     a[0] = m;
// }
// void themVaoViTriK(int a[100], int n, int m, int k)
// {
//     int size = sizeof(a) / sizeof(a[0]); ///????
//     if (n == size)
//     {
//         printf("Khong the them vao mang !");
//     }
//     n++;
//     for (int i = n - 1; i > k; i--)
//     {
//         a[i] = a[i - 1];
//     }
//     a[k] = m;
// }
int main()
{
    int a[100];
    int n;
    nhapMang(a, &n);
    themVaoCuoiMang(a, &n, 199);
    xuatMang(a, n);
    // printf("\n");
    // xuatMang(a, &n);
    // themVaoDauMang(a, n, 88);
    // printf("\n");
    // xuatMang(a, &n);
    // printf("\n");
    // themVaoViTriK(a, n, 200, 2);
    // xuatMang(a, &n);
    return 0;
}
