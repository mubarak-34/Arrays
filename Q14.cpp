#include <stdio.h>

#define SIZE 5

void findMaxOccurrence(int arr[], int size) 
{
    int maxOccurrence = 0;
    int maxNumber = arr[0];
    int i, j;

    for (i = 0; i < size; i++) 
	{
        int occurrence = 1;

        for (j = i + 1; j < size; j++) 
		{
            if (arr[j] == arr[i]) 
			{
                occurrence++;
            }
        }

        if (occurrence > maxOccurrence) 
		{
            maxOccurrence = occurrence;
            maxNumber = arr[i];
        }
    }

    printf("Maximum occurrence in the array:\n");
    printf("%d: %d\n", maxNumber, maxOccurrence);
}

int main() 
{
    int numbers[SIZE];
    int i;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < SIZE; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    findMaxOccurrence(numbers, SIZE);

    return 0;
}

