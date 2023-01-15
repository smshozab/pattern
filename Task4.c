#include<stdio.h>
main()
{
	int rc=9;
	for (int i=0;i<rc;i++)
	{
		for (int j=0;j<rc;j++)
		{
			printf(" ");
			if (i+j==4 || i+j==12 || j-i==4 || i-j==4)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}