#include <stdio.h>
struct Array
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("\n Elements are \n");
    for (int i = 0; i < arr.length; i++)
    {
        printf(" %d ", arr.A[i]);
    }
}
int RbinSearch(struct Array *arr, int l, int h, int key)
{
    int mid = 0;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr->A[mid])
        {
            return key;
        }
        else if (key < arr->A[mid])
        {
            return RbinSearch(arr->A[mid], l, mid - 1, key);
        }
        else
            return RbinSearch(arr->A[mid], mid + 1, h, key);
    }
    return -1;
}
int main()
{
    struct Array arr1 = {{2, 3, 6, 16, 18, 21, 28, 32, 35}, 10, 9};
    printf("Element found at %d\n", RbinSearch(&arr1, 0, 10, 28));
    Display(arr1);
}