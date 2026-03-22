#include <stdio.h>
#include <stdlib.h>

int* findIntersection(int* arr1, int n1, int* arr2, int n2, int* resultSize) {
    int maxSize = (n1 < n2) ? n1 : n2; // Choose the smaller size for the result array
    int* result = (int*)malloc(maxSize * sizeof(int));

    int index = 0;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (*(arr1 + i) == *(arr2 + j)) {
                int found = 0;
                for (int k = 0; k < index; k++) {
                    if (*(result + k) == *(arr1 + i)) {
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    *(result + index) = *(arr1 + i);
                    index++;
                }
                break;
            }
        }
    }

    if (index == 0) {
        free(result); // No intersection found
        *resultSize = 0;
        return NULL;
    }

    *resultSize = index;
    return result;
}

int main() {
    int n1, n2;

    printf("Enter the size of array 1: ");
    scanf("%d", &n1);
    printf("Enter the size of array 2: ");
    scanf("%d", &n2);

    int* arr1 = (int*)malloc(n1 * sizeof(int));
    int* arr2 = (int*)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) {
        printf("Enter element %d of arr1: ", i + 1);
        scanf("%d", arr1 + i);
    }

    for (int i = 0; i < n2; i++) {
        printf("Enter element %d of arr2: ", i + 1);
        scanf("%d", arr2 + i);
    }

    int resultSize;
    int* intersection = findIntersection(arr1, n1, arr2, n2, &resultSize);

    if (intersection != NULL) {
        printf("Intersection: ");
        for (int i = 0; i < resultSize; i++) {
            printf("%d ", *(intersection + i));
        }
        printf("\n");

        free(intersection);
    } else {
        printf("No intersection found.\n");
    }

    free(arr1);
    free(arr2);

    return 0;
}
