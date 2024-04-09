#include <stdio.h>

int main()
{
    int n;
    int t = 0;
    printf("Nhap so ao can mua: ");
    scanf("%d", &n);

    if (n <= 3)
    {
        t = n * 120;
    }
    else if (n <= 6)
    {
        t = (3 * 120) + ((n - 3) * 90);
    }
    else if (n <= 10)
    {
        t = (3 * 120) + (3 * 90) + ((n - 6) * 85);
    }
    else
    {
        t = (3 * 120) + (3 * 90) + (4 * 85) + ((n - 10) * 70);
    }

    printf("So tien can phai tra la: %d VND ", t * 1000);

    return 0;
}