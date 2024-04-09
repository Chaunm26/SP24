
// SẮP SẾP NHỎ DẦN
// #include <stdio.h>
// #define MAX 100

// void sort(int a[], int n)
// {

//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             if (a[i] < a[j])
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     int a[MAX];
//     printf("n = ");
//     scanf("%d", &n);

//     // input
//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     // output
//     sort(a, n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

// SẮP SẾP TĂNG DẦN
// #include <stdio.h>
// #define MAX 100

// void sort(int a[], int n)
// {
//     int temp;
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     int a[MAX];
//     printf("n = ");
//     scanf("%d", &n);

//     // input
//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     // output
//     sort(a, n);

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

// CHÈN PHẦN TỬ MỚI VÀO MẢNG Ở VỊ TRÍ CUỐI

// #include <stdio.h>
// #define MAX 100

// int main(int argc, char const *argv[])
// {
//     int n;
//     int a[MAX];

//     int m; // số cần chèn
//     printf("n = ");
//     scanf("%d", &n);
//     // Input:
//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }

//     printf("Nhap GIA TRI can chen M = ");
//     scanf("%d", &m);
//     // Insert:

//     a[n] = m;

//     // Output:
//     for (int i = 0; i < n + 1; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

// XÓA PHẦN TỬ Ở VỊ TRÍ K
//  #include <stdio.h>
//  #define MAX 100

// int main(int argc, char const *argv[])
// {
//     int n;
//     int a[MAX];

//     int k; // vị trí cần xóa
//     printf("n = ");
//     scanf("%d", &n);
//     // Input:
//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     // Output lần 1
//     printf("Mang da nhap la: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     printf("\nNhap VI TRI can xoa k = ");
//     scanf("%d", &k);
//     // Insert:

//     // 1 2 7 8
//     // 1 2 7 8 3
//     for (int i = k; i < n; i++)
//     {
//         a[i] = a[i + 1];
//     }
//     n--;

//     // Output:
//     printf("Mang moi la: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

#include <stdio.h>
#define MAX 100

int main(int argc, char const *argv[])
{
    int n;
    int a[MAX];

    int x; // GIÁ TRỊ cần xóa
    printf("n = ");
    scanf("%d", &n);
    // Input:
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    // Output lần 1
    printf("Mang da nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\nNhap GIA TRI can xoa X = ");
    scanf("%d", &x);
    // Insert:

    // 1 2 7 8
    // 1 2 8
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            a[i] = a[i + 1];
        }
    }
    n--;

    // for (int i = 0; i < n; i++)
    // {
    //     if (a[i] == m)
    //     {
    //         for (j = i + 1; i < n; j++)
    //         {
    //             a[j - 1] = a[j];
    //             n--;
    //             i--;
    //         }
    //     }
    // }

    // Output:
    printf("Mang moi la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}

// THÊM MỘT PHẦN TỬ Ở VỊ TRÍ K

// #include <stdio.h>
// #define MAX 100

// int main(int argc, char const *argv[])
// {
//     int n;
//     int a[MAX];

//     int k; // VỊ TRÍ cần chèn
//     int m; // GIÁ TRỊ cần chèn
//     printf("n = ");
//     scanf("%d", &n);
//     // Input:
//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     // Output lần 1
//     printf("Mang da nhap la: ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     printf("\nNhap VI TRI can chen K = ");
//     scanf("%d", &k);
//     printf("\nNhap GIA TRI can chen M = ");
//     scanf("%d", &m);
//     // Insert:

//     // 1 2 7 8
//     // 1 55 2 8
//     for (int i = n; i >= k; i--)
//     {
//         a[i] = a[i - 1];
//     }
//     a[k] = m;

//     // Output:
//     printf("Mang moi la: ");
//     for (int i = 0; i < n + 1; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }