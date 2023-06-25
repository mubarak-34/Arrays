#include <stdio.h>

int main() 
{
    float numbers[5];
    int i;

    printf("Enter 5 numbers in float:\n");

    for (i = 0; i < 5; i++) 
	{
        printf("Number [%d]: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    printf("The numbers are:\n");

    for (i = 0; i < 5; i++) 
	{
        printf("%.2f ", numbers[i]);
    }

    return 0;
}
