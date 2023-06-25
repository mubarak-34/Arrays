#include <stdio.h>

#define SIZE 10

int isPalindrome(int arr[], int size) 
{
    int i, j;

    for (i = 0, j = size - 1; i < j; i++, j--) 
	{
        if (arr[i] != arr[j]) 
		{
            return 0;
        }
    }

    return 1;
}

int main() 
{
    int numbers[SIZE];
    int i;

    printf("Enter 10 numbers:\n");

    for (i = 0; i < SIZE; i++) 
	{
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    if (isPalindrome(numbers, SIZE)) 
	{
        printf("The array is a palindrome.\n");
    } 
	
	else 
	{
        printf("The array is not a palindrome.\n");
    }

    return 0;
}

