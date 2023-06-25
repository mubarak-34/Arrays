#include <stdio.h>

void findDifferentNumbers(int arr1[], int arr2[], int size1, int size2) 
{
    int i, j;
    int differentFound = 0;

    printf("Different numbers in the arrays: ");

    for (i = 0; i < size1; i++) 
	{
        int isDifferent = 1; 

        for (j = 0; j < size2; j++) 
		{
            if (arr1[i] == arr2[j]) 
			{
                isDifferent = 0;
                break;
            }
        }

        if (isDifferent) {
            printf("%d ", arr1[i]);
            differentFound = 1;
        }
    }

    for (i = 0; i < size2; i++) 
	{
        int isDifferent = 1; 

        for (j = 0; j < size1; j++) 
		{
            if (arr2[i] == arr1[j]) 
			{
                isDifferent = 0; 
                break;
            }
        }

        if (isDifferent) 
		{
            printf("%d ", arr2[i]);
            differentFound = 1;
        }
    }

    if (!differentFound) 
	{
        printf("No different numbers found");
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

    for (i = 0; i < SIZE; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers2[i]);
    }
    
    findDifferentNumbers(numbers1, numbers2, SIZE, SIZE);

    return 0;
}

