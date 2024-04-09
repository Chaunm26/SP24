#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int ktsnt(int n)
// {
//     if (n < 2)
//     {
//         return 0;
//     }
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 return 0;
//             }
//         }
//     }
//     return 1;
// }
// int soNguyenToLienSau(int min)
// {
//     int daTimThaySoNguyenTo = 0;
//     int num = 2;
//     while (daTimThaySoNguyenTo == 0)
//     {
//         if (ktsnt(num) && num > min)
//         {
//             /**
//              *Thoat khoi for vi da tim thay so nguyen to lien sau.
//              */
//             daTimThaySoNguyenTo = 1;
//             break;
//         }
//         num++;
//     }
//     return num;
// }

// int main(int argc, char const *argv[])
// {
//     int n;

//     printf("n = ");
//     scanf("%d", &n);
//     int soNguyenToHienTai = 2;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i >= j)
//             {
//                 printf("%d ", soNguyenToHienTai);
//                 soNguyenToHienTai = soNguyenToLienSau(soNguyenToHienTai);
//             }
//         }
//         printf("\n");
//     }

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     int n;
//     printf("n = ");
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i > j)
//             {
//                 printf("  ");
//             }
//             else
//             {
//                 printf("* ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     char s[1000];
//     printf("chuoi: ");
//     fgets(s);
//     int n = strlen(s);
//     for (int i = 0; i < n; i++)
//     {
//         if (!(s[i] >= 'a' && s[i] <= 'z') && !(s[i] >= 'a' && s[i] <= 'z'))
//         {
//             strcpy(s[i], s[i + 1]);
//         }
//     }
//     puts(s);

//     return 0;
// }

// int main(int argc, char const *argv[])
// {
//     printf("WOW \n%s", "class \n%s hahah", "wow");
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// #define MAX 100

// char *lTrim(char *s);
// char *rTrim(char *s);
// char *trim(char *s);
// int countCharacter(char *str, char ch);
// //=============DO NOT ADD NEW OR CHANGE STATEMENTS IN THE MAIN FUNCTION=============
// int main()
// {
//     system("cls");
//     printf("\nTEST Q4 (3 marks):\n");
//     char str[51], ch;
//     printf("Please enter a string: ");
//     scanf("%50[^\n]", str);
//     fflush(stdin);
//     printf("Please enter a character: ");
//     scanf("%c", &ch);
//     trim(str);
//     printf("\nOUTPUT:\n");
//     printf("%d", countCharacter(str, ch));
//     printf("\n");
//     system("pause");
//     return 0;
// }
// //===================================================================================
// int countCharacter(char *str, char ch)
// {
//     // Begin your codes here=====================

//     int count = 0;
//     int n = strlen(str);
//     char p = strupr(ch);
//     for (int i = 0; i < n; i++)
//     {
//         if (str[i] == p || s[i] == ch))
//             {
//                 count++;
//             }
//     }
//     return count;
//     // End your codes============================
// }
// //-----------------------------------------------------------
// //=== Do not add new or change statements in the function.===
// char *lTrim(char *s)
// {
//     int i = 0;
//     while (s[i] == ' ')
//         i++;
//     if (i > 0)
//         strcpy(&s[0], &s[i]);
//     return s;
// }
// //-----------------------------------------------------------
// //=== Do not add new or change statements in the function.===
// char *rTrim(char *s)
// {
//     int i = strlen(s) - 1;
//     while (s[i] == ' ')
//         i--;
//     s[i + 1] = '\0';
//     return s;
// }
// //-----------------------------------------------------------
// //=== Do not add new or change statements in the function.===
// char *trim(char *s)
// {
//     rTrim(lTrim(s));
//     char *ptr = strstr(s, "  ");
//     while (ptr != NULL)
//     {
//         strcpy(ptr, ptr + 1);
//         ptr = strstr(s, "  ");
//     }
//     return s;
// }
int main(int argc, char const *argv[])
{
    // char mess[] = "abc";

    // char *p;
    // p = mess + strlen(mess);
    // while (p > mess)
    //     printf("\n%s", --p);
    // return 0;
    int a = 4, b = 6;
    double z = b / a;
    printf("%lf", z);
    return 0;
}
