#include <stdio.h>
// #include <math.h>
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("n = ");
//     scanf("%d", &n);

//     if (((sqrt(n)) * (sqrt(n))) == n)
//     {
//         printf("%d la so chinh phuong", n);
//     }
//     else
//     {
//         printf("%d khong phai la so chinh phuong", n);
//     }
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("n = ");
//     scanf("%d", &n);

//     int flag = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (i * i == n)
//         {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 1)
//     {
//         printf("%d la so chinh phuong", n);
//     }
//     else
//     {
//         printf("%d khong phai so chinh phuong", n);
//     }
//     return 0;
// }

int main(int argc, char const *argv[])
{
    int n, i;
    printf("n = ");
    scanf("%d", &n);

    int flag = 0;
    i = 0;
    while (i <= n)
    {
        if (i * i == n)
        {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 1)
    {
        printf("%d la so chinh phuong", n);
    }
    else
    {
        printf("%d khong phai so chinh phuong", n);
    }

    return 0;
}
