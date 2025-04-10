/*
1.swap function without pointer
2.swap function with pointer
3.without swap function.
all above link this->https://chatgpt.com/share/67dd4392-2b70-8010-bb2e-0ff7313ba8bc
difference between with recursive function and without recursive function->https://chatgpt.com/share/67dd7e9f-4fa4-8010-b633-2d411c75e8ae

*/
#include <stdio.h>

void quicksort(int a[], int lb, int ub);
int partition(int a[], int lb, int ub);
void swap(int a[], int i, int j);  // Swap function without pointers

int main() {
    int a[] = {7, 6, 10, 5, 9, 2, 1,15,7};
    int n = sizeof(a) / sizeof(a[0]);

    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    quicksort(a, 0, n - 1);

    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
void quicksort(int a[], int lb, int ub) {
    if (lb < ub) {
        int loc = partition(a, lb, ub);
        quicksort(a, lb, loc - 1);/// Recursive call for left part
        quicksort(a, loc + 1, ub);/// Recursive call for right part
    }
}/*How It Works:

This is a double-recursive function (calls itself twice in each execution).

It follows the Divide and Conquer approach:

Partition the array into two subarrays around a pivot.

Recursively sort the left and right subarrays.

Stops when lb >= ub (base case).

Recursive Depth: Best/Average Case → O(log n), Worst Case → O(n)

*/

int partition(int a[], int lb, int ub) {
    int pivot = a[lb];
    int start = lb;
    int end = ub;

    while (start < end) {
        while (a[start] <= pivot && start < ub) {
            start++;
        }
        while (a[end] > pivot) {
            end--;
        }
        if (start < end) {
            swap(a, start, end);  // Call swap function
        }
    }
    swap(a, lb, end);  // Swap pivot with partition index

    return end;
}

// Swap function without pointers
void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}



/*

below code i noted my note.
quicksort(a,lb,ub)
{
    if(lb<ub)
    {
        loc=partition(a,lb,ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);

    }
}


 partition(a,lb,ub){
 pivot=a[lb];
  start=lb;
   end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            swap(a[start],a[end]);
        }
    }
    swap(a[lb],a[end])
    return end;

}
*/