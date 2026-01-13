#include <stdio.h>

struct Array  {
    int A[10];
    int size;
    int length;
};

void display(struct Array arr) {
    int i;
    for (i = 0; i < arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

void insert(struct Array *arr,int index,int x){
    if (index < 0 || index > arr->length) {
        return;
    }

    if (arr->length == arr->size) {
        return;
    }
   
int i;
    for (i = arr->length; i > index; i--) {
        arr->A[i] = arr->A[i - 1];
    }

    arr->A[index] = x;
    arr->length++;
}

int Delete(struct Array *arr, int index)
{
    int i, x = 0;

    if (index < 0 || index >= arr->length)
        return 0;

    x = arr->A[index];

    for (i = index; i < arr->length - 1; i++)
        arr->A[i] = arr->A[i + 1];

    arr->length--;
    return x;
}


int main() {

    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    insert(&arr, 2, 10);
    display(arr);
    Delete(&arr,3);
    display(arr);
    return 0;
}


