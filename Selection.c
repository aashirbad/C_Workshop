#include "stdio.h"
void main()
{
	int array[5] = {1,42,3,3,87};
	int i,n,j,min;
	n = 5;
	for (i = 0; i < n-1; i ++)
	{
		min = i; // current element
		for(j = i + 1; j < n; j ++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}

		if (min != i )
		{
			int t;
			t = array[i];
			array[i] = array[min];
			array[min]=t;
		}

	}

	printf("The element in sort are\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%d ", array[i]);
	}

	

}