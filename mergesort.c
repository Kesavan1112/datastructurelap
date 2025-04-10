#include <stdio.h>

void mergesort(int a[], int lb, int ub);
void merge(int a[], int lb, int mid, int ub);

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    mergesort(arr, 0, n - 1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}

void mergesort(int a[], int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        mergesort(a, lb, mid);
        mergesort(a, mid + 1, ub);
        merge(a, lb, mid, ub);
    }
}

void merge(int a[], int lb, int mid, int ub) {
    int i = lb, j = mid + 1, k = 0;
    int b[ub - lb + 1]; // Temporary array

    while (i <= mid && j <= ub) {
        if (a[i] <= a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    while (i <= mid)
        b[k++] = a[i++];

    while (j <= ub)
        b[k++] = a[j++];

    for (i = lb, k = 0; i <= ub; i++, k++)//this line say=https://chatgpt.com/share/67eaa692-2fb8-8010-a967-d1437ba6dd32


        a[i] = b[k]; // Copy sorted elements back to the original array
}



/*#include<stdio.h>
void mergesort(int,int,int);
void merge(int,int,int,int);
int main(){
    return 0;

}
void mergesort(a,lb,ub){
    if(lb<ub){
        int mid=(lb+ub);
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);

    }

}
void merge(a,lb,mid,ub){
    int i,j,k;
    i=lb;
    j=mid+1;
    k=lb;
    while(i<=mid&&j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else{
            b[k]=a[j];
            j++;
        }
        k++;
        if(i>mid){
            while(j<=ub){
                b[k]=a[j];
                j++;
                k++;
            }
        }
            else{
                while(i<=mid){
                    b[k]=a[i];
                    i++;
                    k++;
                }
            }

            for(k=lb;k<=ub;k++){
                a[k]=b[k];
            }
        }
    }

}*/