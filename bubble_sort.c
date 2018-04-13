#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	
	int size = 0;

	printf("Please enter how many numbers you want to sort (up to 20):\n\t");
	scanf("%i", &size);

	if (size < 2)
	{
		printf("Since you have fewer than two numbers, they are already sorted!\n");
		exit(EXIT_SUCCESS);
	}

	int array[size];

	for (int index = 0; index < size; index++)
	{
		printf("Please enter the next number:\n\t");
		scanf("%i", &array[index]);
	}
	

	//Bubble sort algorithm

	int index, iterator;

	for (index = 0; index < size; index++)
	{
		for (iterator = 0; iterator < size - index - 1; iterator++)
		{
			if (array[iterator] > array[iterator + 1])
			{
				swapElements(&array[iterator], &array[iterator + 1]);
			}
		}
	}

	/*
	Program output
	Print the newly sorted array
	*/

	printf("Here are the results:\n");

	for (int index = 0; index < size; index++)
	{
		printf(" %i \n", array[index]);
	}

	return 0;
}

void swapElements(int *firstIndex, int *otherIndex)
{
	int temp = *firstIndex;
	*firstIndex = *otherIndex;
	*otherIndex = temp;
}
