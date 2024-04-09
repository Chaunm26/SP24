// Q2: Reverse (đảo) the array. Write a program that inputs an array of integers, then reverses the order of the elements in the array and prints the reversed array to the screen.
// Sample input and output:
// Input:
// 5
// 6 -3 1 8 7
// OUTPUT:
// 7 8 1 -3 6

// #include <stdio.h>
// #define MAX 100
// int main(int argc, char const *argv[])
// {
//     int a[MAX];
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     for (int i = n; i > 0; i--)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// Q1: Print out the prime numbers in the array.
// Sample input and output:
// Input:
// 6
// 1 -3 11 8 7 19
// OUTPUT:
// 11 7 19
// #include <stdio.h>
// #define MAX 1000
// int checkPrime(int n)
// {
//     if (n < 2)
//     {
//         return 0;
//     }
//     for (int i = 2; i < n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(int argc, char const *argv[])
// {

//     int a[MAX];
//     int n, i;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (checkPrime(a[i]) == 1)
//         {
//             printf("%d ", a[i]);
//         }
//     }

//
//     return 0;
// }

// Q3: Check if the array is an ascending array. Write a program to input an array of integers and check whether the array is an increasing array or not? (each subsequent element is greater than or equal to the previous element). Print out the test results.
// Sample input and output:
// Input:
// 5
// 6 -3 1 8 7
// OUTPUT:
// The array is not ascending.
// Sample input and output:
// Input:
// 5
// 1 8 17 20 21
// OUTPUT:
// The array is ascending.

// #include <stdio.h>
// #define MAX 1000
// int main(int argc, char const *argv[])
// {

//     int a[MAX];
//     int n, i;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < a[i + 1])
//         {
//             printf("The array is ascending");
//             break;
//         }
//         else
//         {
//             printf("The array is not ascending");
//             break;
//         }
//     }

//     return 0;
// }

// Q4: Check if 2 arrays have permutations (hoán vị). Write a program to input 2 arrays of the same size. Check to see if those two arrays are permutations?
// Sample input and output:
// Input:
// 4
// 2 8 9 1
// 1 2 9 8
// OUTPUT:
// Permutation.
// Sample input and output:
// Input:
// 4
// 2 8 9 1
// 5 1 2 8
// OUTPUT:
// No permutation.

// #include <stdio.h>
// #define MAX 1000
// int main(int argc, char const *argv[])
// {

//     int a[MAX], b[MAX];
//     int m, n;

//     // Mang a
//     printf("Nhap so phan tu mang a: ");
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = n - 1; j > 0; j--)
//         {
//             if (a[i] > a[j])
//             {
//                 int t;
//                 t = a[i];
//                 a[i] = a[j];
//                 a[j] = t;
//             }
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     // Mang b
//     printf("\nNhap so phan tu mang b: ");
//     scanf("%d", &m);
//     for (int p = 0; p < m; p++)
//     {
//         printf("b[%d] = ", p);
//         scanf("%d", &b[p]);
//     }
//     for (int p = 0; p < m; p++)
//     {
//         for (int q = n - 1; q > 0; q--)
//         {
//             if (b[p] > b[q])
//             {
//                 int l;
//                 l = a[p];
//                 a[p] = a[q];
//                 a[q] = l;
//             }
//         }
//     }
//     for (int p = 0; p < m; p++)
//     {
//         printf("%d ", b[p]);
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
// Q5. Tim so xuat hien nhieu nhat trong mang
//     Find the number that appears the most.
//-------------------------------------------
int main()
{
    //====DO NOT ADD NEW OR CHANGE THIS STATEMENTS
    system("cls");
    printf("\nTEST Q5 (2 marks):\n");
    int result;
    // Write your statements here
    int a[MAX];
    int count[MAX];
    int n;
    int max = 0;
    printf("Enter n = ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
        }
    for (int i = 0; i < n; i++)
    {
        if (count[a[i]] > max)
        {
            max = count[a[i]];
            result = a[i];
        }
        else if (count[a[i]] == max && result > a[i])
        {
            result = a[i];
        }
    }

    // End your codes
    printf("\nOUTPUT:\n");
    printf("%d", result);
    printf("\n");
    system("pause");
    return (0);
    //==========================================
}