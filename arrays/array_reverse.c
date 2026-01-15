#include<stdio.h>
struct Array
{
  int A[10];
  int size;
  int length;
};

void ReverseAux(struct Array *arr){
    int Aux[arr->length];
    int i,j;

    for(i = arr->length -1,j = 0; i>=0;i--,j++){
        Aux[j]= arr->A[i];
    }

    for(i=0;i < arr->length;i++){
        arr->A[i] = Aux[i];
    }
}
void ReverseSwap(struct Array *arr)
{
    int i, temp;

    for (i = 0; i < arr->length / 2; i++)
    {
        temp = arr->A[i];
        arr->A[i] = arr->A[arr->length - 1 - i];
        arr->A[arr->length - 1 - i] = temp;
    }
}


int main()
{
    struct Array arr = {{10, 20, 30, 40, 50}, 10, 5};

    printf("Original array:\n");
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");

    ReverseAux(&arr);
    printf("Reversed using auxiliary array:\n");
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");

    ReverseSwap(&arr);
    printf("Reversed back using swap:\n");
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");

    return 0;
}
