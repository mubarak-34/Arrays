#include <stdio.h>

int findNumberIndex(int array[], int size, int number) 
{
    int i;

    for (i = 0; i < size; i++) 
	{
        if (array[i] == number) 
		{
            return i;
        }
    }

    return -1;
}

int main() 
{
    int numbers[10];
    int i, numberToFind, index;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < 10; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("Enter the number to find: ");
    scanf("%d", &numberToFind);

    index = findNumberIndex(numbers, 10, numberToFind);

    if (index == -1) 
	{
        printf("Number not found. Index: -1\n");
    } 
	
	else 
	{
        printf("Number found at index: %d\n", index);
    }

    return 0;
}

