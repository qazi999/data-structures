#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}

void Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    int i;

    for (i = 1; i < arr.length; i++)
        if (arr.A[i] > max)
            max = arr.A[i];

    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    int i;

    for (i = 1; i < arr.length; i++)
        if (arr.A[i] < min)
            min = arr.A[i];

    return min;
}

int Sum(struct Array arr)
{
    int s = 0;
    int i;

    for (i = 0; i < arr.length; i++)
        s += arr.A[i];

    return s;
}

float Avg(struct Array arr)
{
    return (float)Sum(arr) / arr.length;
}

int main()
{
    struct Array arr = {{10, 20, 30, 40, 50}, 10, 5};

    printf("Get element at index 2: %d\n", Get(arr, 2));

    Set(&arr, 1, 25);
    printf("After setting index 1 to 25:\n");

    int i;
    for (i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");

    printf("Max element: %d\n", Max(arr));
    printf("Min element: %d\n", Min(arr));
    printf("Sum of elements: %d\n", Sum(arr));
    printf("Average: %.2f\n", Avg(arr));

    return 0;
}
