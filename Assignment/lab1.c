//  #include <stdio.h>

// int main() {
//     int arr[30], size, k, element;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the index at which to insert the element: ");
//     scanf("%d", &k);
//     printf("Enter the element to insert: ");
//     scanf("%d", &element);
//     if (k < 0 || k > size) {
//         printf("Invalid position. Insertion not possible.\n");
//     } else {
//         for (int i = size; i > k; i--) {
//             arr[i] = arr[i - 1];
//         }
//         arr[k] = element;
//         size++; 
//         printf("Array after insertion: ");
//         for (int i = 0; i < size; i++) {
//             printf("%d ", arr[i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// INSERTION AT KTH POSITION


// DELETION

// #include <stdio.h>

// int main() {
//     int arr[100], size, k;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the position (k) from which to delete the element: ");
//     scanf("%d", &k);
//     if (k < 0 || k >= size) {
//         printf("Invalid position. Deletion not possible.\n");
//     } else {
//         for (int i = k; i < size - 1; i++) {
//             arr[i] = arr[i + 1];
//         }
//         size--;
//         printf("Array after deletion: ");
//         for (int i = 0; i < size; i++) {
//             printf("%d ", arr[i]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// TRANSVERSAL

// #include <stdio.h>

// int main() {
//     int arr[100], size;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Array elements: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }


// REVERSAL

// #include <stdio.h>

// int main() {
//     int arr[100], size;
    
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
    
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     int start = 0;
//     int end = size - 1;
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }

//     printf("Reversed array: ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");

//     return 0;
// }


// MERGE THE SORTED ARRAY

// #include <stdio.h>

// int main() {
//     int arr1[100], arr2[100], merged[200];
//     int size1, size2, mergedSize;
//     printf("Enter the size of the first sorted array: ");
//     scanf("%d", &size1);
//     printf("Enter %d elements for the first sorted array: ", size1);
//     for (int i = 0; i < size1; i++) {
//         scanf("%d", &arr1[i]);
//     }
//     printf("Enter the size of the second sorted array: ");
//     scanf("%d", &size2);
//     printf("Enter %d elements for the second sorted array: ", size2);
//     for (int i = 0; i < size2; i++) {
//         scanf("%d", &arr2[i]);
//     }
//     int i = 0, j = 0, k = 0;
//     while (i < size1 && j < size2) {
//         if (arr1[i] < arr2[j]) {
//             merged[k] = arr1[i];
//             i++;
//         } else {
//             merged[k] = arr2[j];
//             j++;
//         }
//         k++;
//     }
//     while (i < size1) {
//         merged[k] = arr1[i];
//         i++;
//         k++;
//     }
//     while (j < size2) {
//         merged[k] = arr2[j];
//         j++;
//         k++;
//     }
//     mergedSize = k;
//     printf("Merged array: ");
//     for (int i = 0; i < mergedSize; i++) {
//         printf("%d ", merged[i]);
//     }
//     printf("\n");
//     return 0;
// }





// MERGE

// #include <stdio.h>

// int main() {
//     int arr1[100], arr2[100], merged[200];
//     int size1, size2, mergedSize;

//     printf("Enter the size of the first sorted array: ");
//     scanf("%d", &size1);

//     printf("Enter %d elements for the first sorted array: ", size1);
//     for (int i = 0; i < size1; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     printf("Enter the size of the second sorted array: ");
//     scanf("%d", &size2);

//     printf("Enter %d elements for the second sorted array: ", size2);
//     for (int i = 0; i < size2; i++) {
//         scanf("%d", &arr2[i]);
//     }

//     int i = 0, j = 0, k = 0;
//     while (i < size1 && j < size2) {
//         if (arr1[i] < arr2[j]) {
//             merged[k] = arr1[i];
//             i++;
//         } else {
//             merged[k] = arr2[j];
//             j++;
//         }
//         k++;
//     }

//     while (i < size1) {
//         merged[k] = arr1[i];
//         i++;
//         k++;
//     }

//     while (j < size2) {
//         merged[k] = arr2[j];
//         j++;
//         k++;
//     }

//     mergedSize = k;

//     printf("Merged array: ");
//     for (int i = 0; i < mergedSize; i++) {
//         printf("%d ", merged[i]);
//     }
//     printf("\n");

//     return 0;
// }


// LINEAR SEARCH
// #include <stdio.h>

// int linearSearch(int arr[], int size, int element) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == element) {
//             return i;
//         }
//     }
//     return -1;
// }
// int main() {
//     int arr[100], size, element, position;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
//     printf("Enter %d elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Enter the element to search: ");
//     scanf("%d", &element);
//     position = linearSearch(arr, size, element);
//     if (position != -1) {
//         printf("Element found at position: %d\n", position);
//     } else {
//         printf("Element not found in the array.\n");
//     }
//     return 0;
// }

// BINARY

// #include <stdio.h>

// int binarySearch(int arr[], int size, int element) {
//     int left = 0, right = size - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;

//         if (arr[mid] == element) {
//             return mid;
//         }

//         if (arr[mid] < element) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }

//     return -1;
// }

// int main() {
//     int arr[100], size, element, position;

//     printf("Enter the size of the sorted array: ");
//     scanf("%d", &size);

//     printf("Enter %d sorted elements: ", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     printf("Enter the element to search: ");
//     scanf("%d", &element);

//     position = binarySearch(arr, size, element);

//     if (position != -1) {
//         printf("Element found at position: %d\n", position);
//     } else {
//         printf("Element not found in the array.\n");
//     }

//     return 0;
// }
