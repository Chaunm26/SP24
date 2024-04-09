#include <stdio.h>
#include <stdlib.h>

void inputArr(int arr[], int *size)
{
    printf("Nhap so luong phan tu trong mang:");
    scanf("%d", size);
    for (int i = 0; i < *size; i++)
    {
        printf("Nhap vao gia tri cua Arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
}

void printfArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%5d", arr[i]);
    }
}

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

int main()
{
    int arr[100];
    int size;
    inputArr(arr, &size);
    sort(arr, size);
    printfArr(arr, size);
    return 0;
}