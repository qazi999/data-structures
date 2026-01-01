#include <stdio.h>

int main() {
    int n, find, left, right, mid;
    
    printf("Enter the number of elements you want to enter in the array : ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the number to search: ");
    scanf("%d", &find);
    
    left = 0;
    right = n - 1;
    
    while (left <= right) {
        mid = (left + right) / 2;
        
        if (arr[mid] == find) {
            printf("Element found at index %d\n", mid);
            return 0;
        } 
        else if (arr[mid] < find) {
            left = mid + 1 ;
        } 
        else {
            right = mid - 1 ;
        }
    }
    
    printf("Element not found\n");
    return 0;
}


