#include <stdio.h>
#include <math.h>
// int main(){
//     int age;
//     printf("Enter age\n");
//     scanf("%d",&age);
//     printf("age is %d", age);
//     return 0;
// }

// int main(){
//     printf("Hello world");
//     return 0;
// }
const float pi = 3.14;
int main()
{
    int r;
    printf("Nhap ban kinh R = ");
    scanf("%d", &r);
    float c = 2 * pi * r;
    float c1 = (round(c * 100)) / 100;
    printf("Chu vi hinh tron = %f \n", c, c1);
    float s = r * r * pi;
    float s1 = (round(s * 100)) / 100;
    printf("Dien tich HCN = %f", s, s1);
    return 0;
}