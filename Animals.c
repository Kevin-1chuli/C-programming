-u #include <stdio.h>
int main(){
int N,X;

printf("\nEnter the number of domestic animals: ");
scanf("%d",&N);
char  domestic[N][50];

//inputf domestic animals
printf("Enter the number of domestic %d animals:\n",N);
for(int i = 0; i < N; i++){
    scanf("%s",domestic[i]);
}

//get the no. of wild animals
printf("\nEnter the number of wild animals: ");
scanf("%d",&X);
char wild[X][50];

//input wild animals
printf("Enter the number of domestic %d animals:\n",X);
for(int i = 0; i < X; i++){
    scanf("%s",wild[i]);
}

printf("\nList of all animals:\n");
for(int i = 0; i < N; i++){
    printf("%s\n",domestic[i]);
}
for(int i = 0; i < X; i++ ){
   printf("%s\n",wild[i]);
}

    return 0;
}