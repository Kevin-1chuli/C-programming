#include <stdio.h>
#include <stdbool.h>
int main(){
//algorithm for sorting the elements in the array...
int arr[] = {2,5,9,1,6,8,3};
int n = sizeof(arr)/sizeof(arr[0]);

for(int i = 0; i < n-1 ; i++){
    for(int j = 0; j < n-i-1; j++){
        bool swapped = false;
        if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}

printf("sorted array: ");

for(int i = 0; i < n; i++){
    printf("%d ",arr[i]);
}
printf(" \n");
    return 0;
}