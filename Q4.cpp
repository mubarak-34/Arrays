#include <stdio.h>

int main() 
{
    int numbers[5];
    int i;
    int largest;
    int secondLargest;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) {
        printf("Number [%d]: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    largest = numbers[0];
    secondLargest = numbers[0];

    for (i = 1; i < 5; i++) 
	{
        if (numbers[i] > largest) 
		{
            secondLargest = largest;
            largest = numbers[i];
        } 
		
		else if (numbers[i] > secondLargest && numbers[i] != largest) 
		{
            secondLargest = numbers[i];
        }
    }

    printf("The second largest value is: %d\n", secondLargest);

    return 0;
}

