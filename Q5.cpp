#include <stdio.h>

int main() 
{
    int numbers[5];
    int i;
    int largest;
    int largestIndex;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    largestIndex = 0;

    for (i = 1; i < 5; i++) 
	{
        if (numbers[i] > largest) 
		{
            largest = numbers[i];
            largestIndex = i;
        }
    }

    printf("The index of the largest value is: %d\n", largestIndex);

    return 0;
}

