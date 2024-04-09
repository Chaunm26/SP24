#include <stdio.h>

// Bài 1
//  int main(int argc, char const *argv[])
//  {
//     double num1, num2;
//     char op;
//     double result = 0;
//     printf("Nhap bieu thuc can tinh toan\n");
//     scanf("%lf%c%lf", &num1, &op, &num2);

//     switch (op)
//     {
//     case '+':
//         result = num1 + num2;
//         printf("%.3lf + %.3lf = %.3lf", num1, num2, result);
//         break;
//     case '-':
//         result = num1 - num2;
//         printf("%.3lf - %.3lf = %.3lf", num1, num2, result);
//         break;
//     case '*':
//         result = num1 * num2;
//         printf("%.3lf * %.3lf = %.3lf", num1, num2, result);
//         break;
//     case '/':
//         if (num2 == 0)
//         {
//             printf("Divide by 0!!");
//         }
//         else
//         {
//             result = num1 / num2;
//             printf("%.3lf / %.3lf = %.3lf", num1, num2, result);
//         }
//         break;

//     default:
//         printf("Op is not supported!!");
//         break;
//     }
//     return 0;
// }

// Bài 2
// int main(int argc, char const *argv[])
// {
//     int n;
//     int prices = 0;
//     printf("Number of kwhs: ");
//     scanf("%d", &n);
//     if (n <= 100)
//     {
//         prices = n * 950;
//         printf("Prices = %d", prices);
//     }
//     else if (n <= 150)
//     {
//         prices = 100 * 950 + ((n - 100) * 1250);
//         printf("Prices = %d", prices);
//     }
//     else if (n <= 200)
//     {
//         prices = 100 * 950 + (50 * 1250) + ((n - 150) * 1350);
//         printf("Prices = %d", prices);
//     }
//     else
//     {
//         prices = 100 * 950 + (50 * 1250) + (50 * 1350) + ((n - 200) * 1550);
//         printf("Prices = %d", prices);
//     }

//     return 0;
// }

// Bài 3
// #include <math.h>
// int main(int argc, char const *argv[])
// {
//     double a, b, c;
//     int delta = 0;

//     printf("a = ");
//     scanf("%lf", &a);
//     printf("b = ");
//     scanf("%lf", &b);
//     printf("c = ");
//     scanf("%lf", &c);
//     delta = (b * b) - (4 * a * c);

//     if (a == 0)
//     {
//         if (b == 0)
//         {
//             if (c == 0)
//             {
//                 printf("\nPt co vo so nghiem");
//             }
//             else
//             {
//                 printf("\nPt vo nghiem");
//             }
//         }
//         else
//         {
//             printf("\nPt bac 1 co nghiem x = %.2f ", -c / b);
//         }
//     }
//     else
//     {
//         printf("Delta = %d", delta);
//         if (delta < 0)
//         {
//             printf("\nPt vo nghiem");
//         }
//         else if (delta == 0)
//         {
//             printf("\nPt co nghiem kep x1 = x2 = %.2f", -b / (2 * a));
//         }
//         else
//         {
//             printf("\nPt co 2 nghiem phan biet");
//             printf("\nx1 = %.2f, x2 = %.2f", (-b + sqrt(delta)) / (2 * a), (-b - sqrt(delta)) / (2 * a));
//         }
//     }

//     return 0;
// }

// bai4
// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("n = ");
//     scanf("%d", &n);
//     int count = 0;

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//             count++;
//     }
//     if (count > 0 || n < 2)
//     {
//         printf("%d khong phai so nguyen to", n);
//     }
//     else
//     {
//         printf("%d la so nguyen to", n);
//     }

//     return 0;
// }

// Bài 5
// int main(int argc, char const *argv[])
// {
//     int n;
//     int f1 = 0, f2 = 1, f = 0;
//     printf("n = ");
//     scanf("%d", &n);

//     // 0   1   1   2   3   5   8
//     // f1  f2  f
//     //     f1  f2  f
//     while (f < n)
//     {
//         f = f1 + f2;
//         f1 = f2;
//         f2 = f;
//     }
//     if (f == n)
//     {
//         printf("%d la so fibonacci", n);
//     }
//     else
//     {
//         printf("%d khong la so fibonacci", n);
//     }

//     return 0;
// }

// bài 6
// int main(int argc, char const *argv[])
// {
//     int m, n;
//     printf("Chieu dai = ");
//     scanf("%d", &m);
//     printf("Chieu rong = ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             if (i == 1 || j == 1 || j == m || i == n)
//             {
//                 printf("* ");
//             }

//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Bài 7
//  #include <stdio.h>
//  int main(int argc, char const *argv[])
//  {
//      int n;
//      printf("N = ");
//      scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (j >= i)
//             {
//                 printf("* ");
//             }
//             else
//             {
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
