 /* If the element is present one or more number of times
  */
#include "stdio.h"
void main()
{
	int a[10]={1,2,3,4,5,6,7,5,9,10};
	int s,i,c = 0;
	printf("Enter the number You want to search : ");
	scanf("%d",&s);
	for (i = 0; i < 10 ; i ++)
	{
		if (a[i] == s){
			printf(" %d is present at position %d \n",s,i+1);
			c ++;
		//	break; // first one 
		
		}
	}
	if (c == 0)
	{
		printf("The Element is not Present .");
	}
	
}
