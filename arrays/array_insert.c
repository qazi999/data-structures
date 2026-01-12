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
int main() {

    struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    insert(&arr, 2, 10);
    display(arr);

    return 0;
}
