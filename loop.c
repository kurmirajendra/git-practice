#include <stdio.h>

int main() {
    int num;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &num);

    int arr[num];  

    
    for(int i = 0; i < num; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements in the array are:\n");
    for(int i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
