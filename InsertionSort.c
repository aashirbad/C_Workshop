#include <stdio.h>
void main()
{
		int a[10] = {2,3,5,3,6,9,8,78,57,45};
		int pos,i;

		for(i = 1; i < 10 ; i ++)
		{
			pos = i;

			while(pos > 0 && a[pos -1] > a[pos] )
			{
				int temp;
				temp = a[pos];
				a [pos] = a [pos - 1];
				a [pos - 1 ] = temp;

				pos --;
			}
		}

		printf("The loop is \n");
		for (int i = 0; i < 10; ++i)
		{
			printf("%d\t",a[i] );
		}
	}