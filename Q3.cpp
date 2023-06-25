#include <stdio.h>

int main() 
{
    int numbers[5];
    int i;
    int largest;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) 
	{
        printf("Number [%d]: ", i + 1);
        scanf("%d", &numbers[i]);
    }
    
    largest = numbers[0];

    for (i = 1; i < 5; i++) 
	{
        if (numbers[i] > largest) 
		{
            largest = numbers[i];
        }
    }

    printf("The highest value is: %d\n", largest);

    return 0;
}

