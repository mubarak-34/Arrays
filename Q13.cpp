#include <stdio.h>

void countOccurrences(int arr[], int size) 
{
    int i, j;
    int count[size];

    for (i = 0; i < size; i++) 
	{
        count[i] = 0;
    }

    for (i = 0; i < size; i++) 
	{
        if (count[i] == -1) 
		{
            continue;
        }

        int num = arr[i];
        count[i] = 1;

        for (j = i + 1; j < size; j++) 
		{
            if (arr[j] == num) 
			{
                count[i]++;
                count[j] = -1;
            }
        }
    }

    printf("Number of occurrences in the array:\n");
    for (i = 0; i < size; i++) 
	{
        if (count[i] != -1) 
		{
            printf("%d: %d\n", arr[i], count[i]);
        }
    }
}

int main() 
{
    int numbers[SIZE];
    int i;

    printf("Enter %d numbers:\n", SIZE);

    for (i = 0; i < SIZE; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    countOccurrences(numbers, SIZE);

    return 0;
}

