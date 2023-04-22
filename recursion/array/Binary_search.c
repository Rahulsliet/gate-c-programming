#include <stdio.h>
#include <conio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("/nElements are : ");
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
}
int BinarySearch(struct Array arr, int key)
{
    int l = 0;
    int h = 10;
    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            l = l + 1;
        }
        else
        {
            h = h - 1;
        }
    }

    return -1;
}

int main()
{
    struct Array arr1 = {{2, 4, 5, 6, 7, 8, 44, 55, 66}, 10, 9};
    int x;
    x = BinarySearch(arr1, 8);
    printf("\nElement found at index %d \n ", x);
    Display(arr1);
    return 0;
}
