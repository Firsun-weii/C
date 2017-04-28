#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr1[4]={3,6,9,11};
	int arr2[5]={1,3,8,45,89};
	int arr3[9]={0};
	int arr4[8]={0};
	int i,j,k,T;
	int num=0;
	int num1=0;



	
	for(i=0;i<4;i++)
	{
	     arr3[i]=arr1[i];
	}
	for(i=4,j=0;i<9&&j<5;i++,j++)
	{
		arr3[i]=arr2[j];
	}

	for(i=0;i<9;i++)
	{
	   printf("%d\t",arr3[i]);
	}
	printf("\n");

	for(i=0;i<8;i++)
	{
	    for(j=(i+1);j<9;j++)
		{
		   if(arr3[i]>arr3[j])
		   {
		       T=arr3[i];
			   arr3[i]=arr3[j];
			   arr3[j]=T;
		   }
		
		}
	
	}


	for(i=0;i<9;i++)
	{
	   printf("%d\t",arr3[i]);
	}
	printf("\n");






	for(i=0;i<4;i++)
	{
		num=0;
	    for(j=0;j<5;j++)
		{    
		    if(arr1[i]==arr2[j])
			   break;
			else
				num++;
			   
			
		
		}
		printf("%d\t",num);
		
		if(num==5)
			arr4[i]=arr1[i];
		else
		{
			arr4[i]=arr2[num1];
			num++;
		}
	
	}
	for(i=4,j=1;i<8&&j<5;i++,j++)
	{
	     arr4[i]=arr2[j];
	}
	printf("\n");
	for(i=0;i<8;i++)
	{
	   printf("%d\t",arr4[i]);
	}
	printf("\n");
	for(i=0;i<7;i++)
	{
	    for(j=(i+1);j<8;j++)
		{
		   if(arr4[i]>arr4[j])
		   {
		       T=arr4[i];
			   arr4[i]=arr4[j];
			   arr4[j]=T;
		   }
		
		}
	
	}
	for(i=0;i<8;i++)
	{
	   printf("%d\t",arr4[i]);
	}
	printf("\n");

	system("pause");
	return 0;


}