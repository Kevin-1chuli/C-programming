#include <stdio.h>
int main (){
    int arr[] = {12,34,15,5,90,22,12};
    int n = sizeof(arr)/sizeof(arr[0]);

for(int i = 0; i < n-1; i++){
    int min_index = i;
    for(int j =i+1; j < n; j++){
        if(arr[j] < arr[min_index]){
            min_index = j;
        }
    }
     int temp = arr[i];
     arr[i] = arr[min_index];
     arr[min_index] = temp;
  
}

printf("Sorted array: ");
for(int i = 0; i < n; i++){
    printf("%d ",arr[i]);
}
printf("\n");

    return 0;
}