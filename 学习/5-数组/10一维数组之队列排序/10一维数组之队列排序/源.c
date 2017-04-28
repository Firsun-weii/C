#include<stdio.h>
#include<stdlib.h>
int main()


{
	int a[5]={0,0,0,0,0};
	int i,j,t,T,W;
	for(i=0;i<5;i++)
	{
	   printf("请输入数组a的5个元素：");
	   scanf("%d",&a[i]);
	
	}
	for(i=1;i<5;i++)
	{
	   printf("%d\t",a[i]);
	
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
	    for(j=0;j<=i;j++)
		{
		    if(a[i]<a[j])
			{
			    T=a[i];
				a[i]=a[j+1];
				a[j]=a[i];
			
			}
			else
				if(a[i]>a[j])
				{   
					
					W=a[i];
			        a[i]=a[j-1];
					a[j]=a[i];
				  
				
				}


		}
	
	
	}
	for(i=1;i<5;i++)
	{
	   printf("%d\t",a[i]);
	
	}
	system("pause");
	return 0;
}