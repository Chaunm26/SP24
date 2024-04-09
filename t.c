#include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int f0 = 0, f1 = 1, f2 = 1, count = 0;
//     int n;
//     printf("n=");
//     scanf("%d", &n);
//     while (count < n)
//     {
//         printf("%d ", f2);
//         f2 = f1 + f0;
//         f0 = f1;
//         f1 = f2;
//         count++;
//     }

//     return 0;
// }

int main(int argc, char const *argv[])
{
    int f0 = 0, f1 = 1, f = 1, count = 0;
    int n;
    printf("n=");
    scanf("%d", &n);

    while (count < n)
    {
        printf("%d ", f);

        f = f1 + f0;
        f1 = f0;
        f0 = f;

        // f = f1 + f0;
        // f0 = f1;
        // f1 = f;
        count++;
    }

    return 0;
}