#include <stdio.h>
#include <ctype.h>

// Function to ensure that no digit is entered in the animal names
void getAnimalNames(char animals[][50], int count) {
    for (int i = 0; i < count; i++) {
        while (1) {
            printf("Enter name for animal %d: ", i + 1);
            scanf("%s", animals[i]);
            
            int valid = 1;
            // Check each character to see if it is a digit
            for (int j = 0; animals[i][j] != '\0'; j++) {
                if (isdigit(animals[i][j])) {
                    valid = 0;
                    break;
                }
            }
            if (valid) {
                break;  // Exit the loop if the name is valid
            } else {
                printf("Invalid input! Animal names shouldn't contain digits. Try again.\n");
            }
        }
    }
}

int main() {
    int N, X;

    // Ensure that the number of domestic animals is a positive integer
    while (1) {
        printf("\nEnter the number of domestic animals: ");
        if (scanf("%d", &N) == 1 && N > 0) {
            break;
        } else {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');  // clear the input buffer
        }
    }

    // Ensure that the number of wild animals is a positive integer
    while (1) {
        printf("\nEnter the number of wild animals: ");
        if (scanf("%d", &X) == 1 && X > 0) {
            break;
        } else {
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');  // clear the input buffer
        }
    }

    // Declare arrays to hold animal names (each name can be up to 49 characters + '\0')
    char domestic[N][50];
    char wild[X][50];

    // Get the names of domestic animals
    printf("\nEnter domestic animal names:\n");
    getAnimalNames(domestic, N);

    // Get the names of wild animals
    printf("\nEnter wild animal names:\n");
    getAnimalNames(wild, X);

    // Print all animals
    printf("\nDomestic animals:\n");
    for (int i = 0; i < N; i++) {
        printf("%s\n", domestic[i]);
    }
    for (int i = 0; i < X; i++) {
        printf("%s\n", wild[i]);
    }


    return 0;
}