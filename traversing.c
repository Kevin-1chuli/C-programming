# include <stdio.h>
# include <stdlib.h>
int main(){
     // finding the lowest number in the array
    int arr[] ={60,20,50,40,10,3,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];

    for(int i = 0; i < size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
printf("Lowest value: %d\n",min);

    return 0;
}