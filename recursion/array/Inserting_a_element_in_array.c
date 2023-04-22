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
    printf("\nElements are : ");
    for (i = 0; i <= arr.length; i++)
        printf("%d ", arr.A[i]);
}
void Insert(struct Array *arr, int index, int x)
{
    int i;
    if (index >= 0 && index <= arr->length)
    {
        for (i = arr->length; i > index; i--)
        {
            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}
int main()
{
    struct Array arr1 = {{1, 2, 3, 4, 5}, 10, 5};
    Insert(&arr1, 2, 12);
    Display(arr1);
    return 0;
}
