#include <stdio.h>
#include <math.h>
// int main()
// {
//     int a, b;
//     printf("Nhap a = ");
//     scanf("%d", &a);
//     printf("Nhap b = ");
//     scanf("%d", &b);

//     if (a > b)
//     {
//         printf("%d > %d", a, b);
//     }
//     else
//     {
//         printf("%d < %d", b, a);
//     }
//     return 0;
// }

// int main()
// {
//     int a, b, c, d;
//     printf("Nhap vao 4 so a,b,c,d \n");
//     scanf("%d%d%d%d", &a, &b, &c, &d);
//     if (a > b && a > c && a > d)
//     {
//         printf("%d la so lon nhat", a);
//     }
//     if (b > a && b > c && a > d)
//     {
//         printf("%d la so lon nhat", b);
//     }
//     if (c > a && c > b && c > d)
//     {
//         printf("%d la so lon nhat", c);
//     }
//     if (d > a && d > b && d > c)
//     {
//         printf("%d la so lon nhat", d);
//     }
//     return 0;
// }

// int main()
// {
//     int x;
//     int max;
//     scanf("%d", &x);
//     max = x;
//     scanf("%d", &x);
//     if (x > max)
//     {
//         max = x;
//     }
//     scanf("%d", &x);
//     if (x > max)
//     {
//         max = x;
//     }
//     scanf("%d", &x);
//     if (x > max)
//     {
//         max = x;
//     }
//     printf("So lon nhat la %d", max);
//     return 0;
// }

// int main()
// {
//     int a, b, c;
//     scanf("%d%d%d", &a, &b, &c);

//     if (a + b > c || a + c > b || b + c > a)
//     {
//         if (a == b && a == c)
//         {
//             printf("La tam giac deu");
//         }
//         else if (a == b || a == c || b == c)
//         {
//             printf("La tam giac can");
//         }
//         else if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
//         {
//             printf("La tam giac vuong");
//         }
//         else
//         {
//             printf("La tam giac thuong");
//         }
//     }

//     return 0;
// }

// int main()
// {
//     int x;
//     printf("Nhap so 2=> 8 : ");

//     scanf("%d", &x);
//     switch (x)
//     {
//     case (2):
//         printf("Monday");
//         break;
//     case (3):
//         printf("Tuesday");
//         break;
//     case (4):
//         printf("Wednesday");
//         break;
//     case (5):
//         printf("Thursday");
//         break;
//     case (6):
//         printf("Friday");
//         break;
//     case (7):
//         printf("Saturday");
//         break;
//     case (8):
//         printf("Sunday");
//         break;
//     default:
//         printf("No");
//         break;
//     }
//     return 0;
// }

// ax+b=0,(a,b nhap tu ban phim)
// int main()
// {
//     int a, b;
//     float x;
//     printf("Giai phuong trinh ax+b=0\n");
//     printf("Nhap a = ");
//     scanf("%d", &a);
//     printf("Nhap b = ");
//     scanf("%d", &b);
//     if (a == 0)
//     {
//         if (b == 0)
//         {
//             printf("Pt vo so nghiem");
//         }
//         else
//         {
//             printf("Pt vo nghiem");
//         }
//     }
//     else
//     {
//         x = -b * 1.0 / a;
//         printf("Pt co 1 nghiem x = %.2f", x);
//     }
//     return 0;
// }

// ax^2+bx+c=0
int main()
{
    int a;
    int b;
    int c;
    int delta;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Nhap b = ");
    scanf("%d", &b);
    printf("Nhap c = ");
    scanf("%d", &c);
    delta = (b * b) - 4 * a * c;
    printf("delta = %d\n", delta);

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                printf("Pt co vo so nghiem");
            }
            else
            {
                printf("pt vo nghiem");
            }
        }
        else
        {
            printf("pt bac 1 co nghiem x = %.1f", -c * 1.0 / b);
        }
    }
    else
    {
        if (delta < 0)
        {
            printf("pt vo nghiem");
        }
        else if (delta == 0)
        {
            printf("pt co nghiem kep x = %d", -b / 2 * a);
        }
        else
        {
            printf("pt co 2 nghiem x1, x2 = %.1f %.1f", ((-b) + sqrt(delta)) / (2 * a), ((-b) - sqrt(delta)) / (2 * a));
        }
    }

    return 0;
}
