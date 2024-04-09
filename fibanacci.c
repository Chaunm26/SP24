// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("N = ");
//     scanf("%d", &n);
//     int dem = 0;

//     if (n == 0 || n == 1)
//     {
//         printf("%d la so fibonacci", n);
//         return 0;
//     }
//     int s1 = 0, s2 = 1, s = 0;
//     for (int i = 2; i <= n; i++)
//     {
//         s = (i - 1) + (i - 2);
//         {
//             dem += 1;
//         }
//     }

//     if (dem == 1)
//     {
//         printf("%d la so fibonacci", n);
//     }
//     else
//     {
//         printf("%d khong la so fibonacci", n);
//     }
//     return 0;
// }

#include <stdio.h>

int main()
{
    int t1 = 1, t2 = 0, f = 0, k = 0;
    int n;
    printf("n = ");
    scanf("%d", &n);
    printf("Day so fibonacci:\n");
    // f=t1+t2;
    //	while(f<n)
    //	{
    //		printf("%d ",f);
    //		f=t1+t2;
    //		t1=t2;
    //		t2=f;
    //
    //	}
    while (k < n)
    {
        printf("%d ", f);

        f = t1 + t2;
        t1 = t2;
        t2 = f;
        k++;
    }
    //	if(f==n)
    //	{
    //		printf("%d la so fibonacci",n);
    //	}
    //	else
    //	{
    //		printf("%d khong phai so fibonacci",n);
    //	}
    return 0;
}