#include<stdio.h>
#include<stdlib.h>

int main()

{
	int a[5]={0,0,0,0,0};
	int i,j,t,T;
	for(i=0;i<5;i++)
	{
	   printf("请输入数组a的5个元素：");
	   scanf("%d",&a[i]);
	
	}
	for(i=0;i<5;i++)
	{
	  printf("%d\t",a[i]);
	}
	printf("\n");
	for(j=0;j<4;j++)
	{
	    for(t=0;t<4;t++)
		{   
			for(i=t;i<4;i++)
			{
		         if(a[i]<a[i+1])
			    {
				      T=a[i];
				      a[i]=a[i+1];
				      a[i+1]=T;
			    }
			}
		
		}
	
	
	}
	for(i=0;i<5;i++)
	{
	  printf("%d\t",a[i]);
	}
	system("pause");
	return 0;


}