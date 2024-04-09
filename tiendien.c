#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int t = 0;
    printf("Nhap so dien tieu thu: ");
    scanf("%d", &n);

    if (n <= 100)
    {
        t = n * 950;
    }
    else if (n <= 150)
    {
        t = (100 * 950) + ((n - 100) * 1250);
    }
    else if (n <= 200)
    {
        t = (100 * 950) + (50 * 1250) + ((n - 150) * 1350);
    }
    else
    {
        t = (100 * 950) + (50 * 1250) + (50 * 1350) + ((n - 200) * 1550);
    }
    printf("So tien dien can phai tra cho %d Kwhs la: %d VND", n, t);

    return 0;
}
