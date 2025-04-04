#include <stdio.h>
int main(){

    int my_Array[] = {3,7,8,5,1,9,2,4};
    int n = sizeof(my_Array)/sizeof(my_Array[0]);

    for(int i = 0; i < n; i++){
        int insertIndex = i;
        int currentValue = my_Array[i];
        int j = i-1;

        while (j >= 0 && my_Array[j] > currentValue) {
            my_Array[j + 1] = my_Array[j];
            insertIndex = j;
            j--;
        }
        my_Array[insertIndex] = currentValue;
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", my_Array[i]);

    }

    return 0;
}