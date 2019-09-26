#include "stdio.h"
#include "math.h"
void main()
{
	int a[5] = {1,2,3,4,5};
	int low = 0;
	int  high = 5,mid ,element,i;
	int flag =0;
		printf("Enter the Searched Element : ");
	scanf("%d", &element);
																				// 
	for(i =0; i < log2(5); i ++)
	{
		if( element == a[mid])
		{
			printf("%dth place ",mid+1);
			flag = mid +1 ;
			break;
		}
		else if (element < a[mid])
		{
			high = mid;
			mid = (high + low ) / 2;
			
		}
		
			else if (element > a[mid])
		{
			low = mid + 1;
			mid = (high + low ) / 2;
			
		}
	
	}
	if (flag == 0)
	{
		printf ("The Element is not present");
	}
}
