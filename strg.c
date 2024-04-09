#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
int main(int argc, char const *argv[])
{
    char a[MAX];
    int n, count = 0;
    // gets(a)
    scanf("%[^\n]", a);
    // strupr(a): hàm in hoa
    // strrev(a): đảo chuỗi
    n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'B' || a[i] == 'b')
        {
            count++;
        }
    }

    // puts(a)
    printf("%d ", count);
    return 0;
}
