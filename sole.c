#include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("n = ");
//     scanf("%d", &n);
//     // for (int i = 0; i = n; i++)
//     // {
//     //     if (i % 2 != 0)
//     //     {
//     //         printf("%d ", i);
//     //     }
//     // }

//     for (int i = 1; i <= n; i += 2)
//     {
//         printf("%d ", i);
//     }
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     int s = 0;
//     printf("n = ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i += 2)
//     {
//         printf("%d ", i);
//         s = s + i;
//     }
//     printf("\nTong = %d ", s);

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     int count = 0;
//     printf("N = ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i += 2)
//     {
//         printf("%d ", i);
//         count++;
//         if (count % 15 == 0)
//         {
//             printf("\n");
//         }
//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     for (int i = 0; i <= 127; i++)
//     {
//         printf("\n%d %x %c", i, i, i);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i;
//     char c2;
//     char c1;
//     printf("Nhap c1: ");
//     scanf("%c", &c1);
//     printf("Nhap c2: ");
//     // fflush(stdin);// xoa bo nho dem
//     scanf("%c", &c2);
//     for (int i = c1; i <= c2; i++)
//     {
//         printf("\n%d %x %c ", i, i, i);
//     }
//     return 0;
// }

int main()
{

    int x;
    int s = 0;

    scanf("%d", &x);
    while (x != 0)
    {
        s += x;
        scanf("%d", &x);
    }
    printf("Tong = %d ", s);
    return 0;
}
//