#include <stdio.h>

void findCommonNumbers(int arr1[], int arr2[], int size1, int size2) 
{
    int i, j;
    int commonFound = 0;

    printf("Common numbers in the arrays: ");

    for (i = 0; i < size1; i++) 
	{
        for (j = 0; j < size2; j++) 
		{
            if (arr1[i] == arr2[j]) 
			{
                printf("%d ", arr1[i]);
                commonFound = 1;
                break;
            }
        }
    }

    if (!commonFound) 
	{
        printf("No common numbers found");
    }

    printf("\n");
}

int main() 
{
    int numbers1[SIZE];
    int numbers2[SIZE];
    int i;

    printf("Enter %d numbers for the first array:\n", SIZE);

    for (i = 0; i < SIZE; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers1[i]);
    }

    printf("Enter %d numbers for the second array:\n", SIZE);

    for (i = 0; i < SIZE; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers2[i]);
    }

    findCommonNumbers(numbers1, numbers2, SIZE, SIZE);

    return 0;
}

