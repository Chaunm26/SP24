#include <stdio.h>
#define MAX 100

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
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     int t = 0;
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
//     for (int i = 0; i < n; i++)
//     {
//         t += a[i];
//     }
//     printf("%d", t);

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     int t = 0;
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
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             printf("%d ", a[i]);
//         }
//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     int t = 0;
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
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] % 2 == 0)
//         {
//             t += a[i];
//         }
//     }
//     printf("%d", t);
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n, x;
//     int t = 0;
//     int a[MAX];
//     printf("x= ");
//     scanf("%d", &x);
//     printf("n = ");
//     scanf("%d", &n);
//     // input
//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     // output

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] > x)
//         {
//             printf("%d ", a[i]);
//         }
//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n, min;
//     int t = 0;
//     int a[MAX];

//     printf("n = ");
//     scanf("%d", &n);
//     // input

//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     min = a[0];
//     // output
//     for (int i = 1; i < n; i++)
//     {
//         if (min > a[i])
//         {
//             min = a[i];
//         }
//     }
//     printf("%d", min);

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n, max;
//     int t = 0;
//     int a[MAX];

//     printf("n = ");
//     scanf("%d", &n);
//     // input

//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     max = a[0];
//     // output
//     for (int i = 1; i < n; i++)
//     {
//         if (max < a[i])
//         {
//             max = a[i];
//         }
//     }
//     printf("%d", max);

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n, x;
//     int t = 0;
//     int a[MAX];
//     printf("x = ");
//     scanf("%d", &x);
//     printf("n = ");
//     scanf("%d", &n);
//     // input

//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }

//     // output
//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] == x)
//         {
//             printf("%d", i);
//         }
//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n, x;
//     int t = 0;
//     int a[MAX];
//     printf("x = ");
//     scanf("%d", &x);
//     printf("n = ");
//     scanf("%d", &n);
//     // input

//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }

//     // output
//     for (int i = 1; i < n; i++)
//     {
//         if (a[i] == x)
//         {
//             t++;
//         }
//     }
//     if (t != 0)
//     {
//         printf("%d co xuat hien trong mang", x);
//     }
//     else
//     {
//         printf("%d khong xuat hien trong mang", x);
//     }

//     return 0;
// }

int checkPrime(int m)
{
    if (m < 2)
    {
        return 0;
    }
    for (int i = 2; i < m; i++)
    {
        if (m % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    int n;
    int a[MAX];
    int t = 0;

    printf("n = ");
    scanf("%d", &n);
    // input

    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // output
    for (int i = 0; i < n; i++)
    {
        if (checkPrime(a[i]) != 0)
        {
            printf("%d ", a[i]);
            t++;
        }
    }
    if (t == 0)
    {
        printf("No PRIME");
    }
    return 0;
}
