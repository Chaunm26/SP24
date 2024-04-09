#include <stdio.h>

int main(int argc, char const *argv[])
{
    double num1, num2;
    char opera;
    printf("Nhap bieu thuc co dang\n");
    printf("    a (+ - * /) b\n");
    printf("Luu y, bieu thuc khong chua \'khoang cach\' \n");
    scanf("%lf%c%lf", &num1, &opera, &num2);

    switch (opera)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 == 0)
        {
            printf("Khong the chia cho 0");
        }
        else
        {
            printf("%.1lf / %.1lf = %.2lf", num1, num2, num1 / num2);
        }
        break;
    default:
        printf("Opera is not supported");
        break;
    }
    return 0;
}
