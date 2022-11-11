#include<stdio.h>
#include<stdlib.h>
int linearSearch(int, int[], int);
int linearSearch(int size, int array[], int key) {
        int i;
        for(i=0; i<size; i++) {
                if(key==array[i]) {
                        printf("key value found at index %d\n", i);
                        exit(0);
                }
        }
        return 1;
}


int main() {
        int size, i, key;
        printf("Enter array size: ");
        scanf("%d", &size);
        int array[size];
        printf("Enter array elements:\n");

        for(i=0; i<size; i++) {
                printf("Input array[%d]: ", i);
                scanf("%d", &array[i]);
        }

        printf("Enter key value: ");
        scanf("%d", &key);

        int status = linearSearch(size,array, key);

        if(status == 1) {
                printf("key value not found in the array\n");
        }
        return 0;
}
