#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a,i,j;
	for(i=1;i<10;i++)
	{
	    for(j=1;j<=i;j++)
		{
		    a=i*j;
			printf("%d*%d=%d\t",j,i,a);

		
		}
		printf("\n");
	    i++;
	
	}
	system("pause");
	return 0;



}