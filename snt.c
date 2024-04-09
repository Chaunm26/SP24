#include <stdio.h>
#include <math.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("n = ");
//     scanf("%d", &n);
//     if (n < 2)
//     {
//         printf("%d khong phai la so nguyen to", n);
//         return 0;
//     }

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             printf("%d khong phai so nguyen to", n);
//             return 0;
//         }
//     }
//     printf("%d la so nguyen to", n);

//     return 0;
// }

int main(int argc, char const *argv[])
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    int count = 0;
    int numberCheck = 2;
    printf("%d so nguyen to dau tien la: ", n);
    do
    {

        int laSoNguyenToFlag = 1;
        for (int j = 2; j < numberCheck; j++)
        {
            if (numberCheck % j == 0)
            {
                laSoNguyenToFlag = 0;
                break;
            }
        }
        if (laSoNguyenToFlag == 1)
        {
            printf("%d ", numberCheck);
            count++;
        }

        numberCheck++;
    } while (count < n);

    return 0;
}
