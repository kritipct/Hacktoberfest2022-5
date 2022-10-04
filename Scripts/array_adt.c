#include <stdio.h>
#include <stdlib.h>
typedef struct Array
{
    int *arr;
    int size;
    int length;
} A;
void display(A ar)
{
    int i;
    printf("\n All elements are: ");
    for (i = 0; i < ar.length; i++)
    {
        printf(" %d", ar.arr[i]);
    }
}
void insert(A *ar, int index, int x)
{
    int i;
    if (index >= 0 && index <= ar->length)
        for (i = ar->length; i > index; i--)
        {
            ar->arr[i] = ar->arr[i - 1];
        }
    ar->arr[index] = x;
    ar->length++;
}

int delete (A *ar, int index)
{

    if (index >= 0 && index <= ar->length)
    {
        int x = ar->arr[index];
        int i;
        for (i = index; i < ar->length; i++)
        {
            ar->arr[i] = ar->arr[i + 1];
        }
        ar->length--;
        return x;
    }
    return 0;
}

int main()
{
    A ar;
    int n, i;
    printf("Enter the size of array: ");
    scanf("%d", &ar.size);
    ar.length = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    ar.arr = (int *)malloc(ar.size * sizeof(int));
    printf("\nEnter all elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar.arr[i]);
    }
    ar.length = n;

    display(ar);
    int index, x, y;
    printf("\nEnter the index and value to insert: ");
    scanf("%d%d", &index, &x);
    insert(&ar, index, x);
    display(ar);
    printf("\nEnter the index to delete: ");
    scanf("%d", &index);
    delete (&ar, index);
    display(ar);

    return 0;
}