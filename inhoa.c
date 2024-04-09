#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    char ch;

    int nVowels = 0;    // Number of vowels: nguyên âm
    int nconsonats = 0; // Number of consonants: phụ âm
    int nOthers = 0;    // Number of other characters
    do
    {
        printf("Nhap ky tu A -> Z:\n");
        scanf("%c", &ch);
        if (ch >= 'a' && ch <= 'z')
        {

            switch (toupper(ch))
            {
            case 'O':
                nVowels++;
                break;
            case 'A':
                nVowels++;
                break;
            case 'I':
                nVowels++;
                break;
            case 'E':
                nVowels++;
                break;
            case 'U':
                nVowels++;
                break;
            default:
                nconsonats++;
                break;
            }
        }

        else
            nOthers++;

    } while (ch == '\n');

    printf("So ky tu khac = %d\n", nOthers);
    printf("So nguyen am = %d\n", nVowels);
    printf("So phu am = %d", nconsonats);

    return 0;
}
