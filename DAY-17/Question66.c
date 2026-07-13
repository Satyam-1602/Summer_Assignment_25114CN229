//Write a program to Union of arrays.
#include <stdio.h>
int main() {
    int n1, n2, i, j, k = 0;
    printf("Enter the size of first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int unionArray[n1 + n2];
    for(i = 0; i < n1; i++) {
        unionArray[k++] = arr1[i];
    }
    for(j = 0; j < n2; j++) {
        int found = 0;
        for(i = 0; i < n1; i++) {
            if(arr2[j] == arr1[i]) {
                found = 1;
                break;
            }
        }
        if(!found) {
            unionArray[k++] = arr2[j];
        }
    }
    printf("Union of arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArray[i]);
    }
    return 0;
}