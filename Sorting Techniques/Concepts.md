1. **Bubble Sort**
    - **How it works**: Continuously swaps adjacent elements if they are in the wrong order.
    - **Worst-case time complexity**: $$O(N^2)$$
    - **Stability**: Stable. It preserves the relative order of equal elements because it only swaps adjacent elements if they are in the wrong order[^1^][1][1].
    - **Code example**:
    ```c
    void bubbleSort(int arr[], int n) {
       int i, j, temp;
       for (i = 0; i < n-1; i++) {     
           for (j = 0; j < n-i-1; j++) { 
               if (arr[j] > arr[j+1]) {
                  temp = arr[j];
                  arr[j] = arr[j+1];
                  arr[j+1] = temp;
               }
           }
       }
    }
    ```

2. **Selection Sort**[^1^][1][1][^2^][2][2]
    - **How it works**: Repeatedly selects the smallest (or largest) element from the unsorted portion of the list and moves it to the sorted portion.
    - **Worst-case time complexity**: $$O(N^2)$$
    - **Stability**: Unstable. It can change the relative order of equal elements during the selection process[^1^][1][1].
    - **Code example**:
    ```c
    void selectionSort(int arr[], int n) {
       int i, j, min_idx, temp;
       for (i = 0; i < n-1; i++) {
           min_idx = i;
           for (j = i+1; j < n; j++)
             if (arr[j] < arr[min_idx])
                min_idx = j;
           temp = arr[min_idx];
           arr[min_idx] = arr[i];
           arr[i] = temp;
       }
    }
    ```

3. **Insertion Sort**
    - **How it works**: Builds a sorted array one item at a time by comparing each item with the rest of the array and inserting it into its correct position.
    - **Worst-case time complexity**: $$O(N^2)$$
    - **Stability**: Stable. It maintains the relative order of equal elements because it only inserts an element at its correct position[^1^][1][1].
    - **Code example**:
    ```c
    void insertionSort(int arr[], int n) {
       int i, key, j;
       for (i = 1; i < n; i++) {
           key = arr[i];
           j = i - 1;
           while (j >= 0 && arr[j] > key) {
               arr[j + 1] = arr[j];
               j = j - 1;
           }
           arr[j + 1] = key;
       }
    }
    ```

4. **Merge Sort**
    - **How it works**: Divides the array into two halves, sorts each half, and then merges the sorted halves back together.
    - **Worst-case time complexity**: $$O(N \log N)$$
    - **Stability**: Stable. It preserves the relative order of equal elements during the merge process[^1^][1][1].
    - **Code example**:
    ```c
    void merge(int arr[], int l, int m, int r) {
        int i, j, k;
        int n1 = m - l + 1;
        int n2 = r - m;
        int L[n1], R[n2];
        for (i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];
        i = 0;
        j = 0;
        k = l;
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) {
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }
    void mergeSort(int arr[], int l, int r) {
        if (l < r) {
            int m = l + (r - l) / 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l, m, r);
        }
    }
    ```

5. **Quick Sort**
    - **How it works**: Selects a 'pivot' element and partitions the other elements into two groups - those less than the pivot and those greater than the pivot, and then recursively sorts the two groups.
    - **Worst-case time complexity**: $$O(N^2)$$ (but $$O(N \log N)$$ on average)
    - **Stability**: Unstable. The relative order of equal elements can be changed during the partition process[^1^][1][1].
    - **Code example**:
    ```c
    void swap(int* a, int* b) {
        int t = *a;
        *a = *b;
        *b = t;
    }
    int partition (int arr[], int low, int high) {
        int pivot = arr[high];
        int i = (low - 1);
        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }
        swap(&arr[i + 1], &arr[high]);
        return (i + 1);
    }
    void quickSort(int arr[], int low, int high) {
        if (low < high) {
            int pi = partition(arr, low, high);
            quickSort(arr, low, pi - 1);
            quickSort(arr, pi + 1, high);
        }
    }
    ```

6. **Heap Sort**
    - **How it works**: Converts the input array into a binary heap structure. It then uses the heap to iteratively remove the maximum element and place it at the end of the list.
    - **Worst-case time complexity**: $$O(N \log N)$$
    - **Stability**: Unstable. The relative order of equal elements can be changed during the heapify process[^1^][1][1].
    - **Code example**:
    ```c
    void heapify(int arr[], int n, int i) {
        int largest = i;
        int l = 2*i + 1;
        int r = 2*i + 2;
        if (l < n && arr[l] > arr[largest])
            largest = l;
        if (r < n && arr[r] > arr[largest])
            largest = r;
        if (largest != i) {
            swap(&arr[i], &arr[largest]);
            heapify(arr, n, largest);
        }
    }
    void heapSort(int arr[], int n) {
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(arr, n, i);
        for (int i=n-1; i>=0; i--) {
            swap(&arr[0], &arr[i]);
            heapify(arr, i, 0);
        }
    }
    ```
