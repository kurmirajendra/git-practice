 main2
#include <stdio.h>

int main() {
    int num;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);

    int arr[num];  // Now 'num' is declared before using it

    // Input elements
    for(int i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Print elements
    printf("\nThe elements in the array are:\n");
    for(int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
 return 0;
 }
    

