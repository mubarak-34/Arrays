#include <stdio.h>

int main() {
    int size, i;
    int sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int numbers[size];

    printf("Enter the numbers:\n");

    for (i = 0; i < size; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        sum += numbers[i];
    }

    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}

