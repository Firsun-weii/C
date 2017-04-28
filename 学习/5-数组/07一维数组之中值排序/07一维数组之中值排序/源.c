#include<stdio.h>
#include<stdlib.h>

int main()

{
	int a[5]={0,0,0,0,0};
    int i,j,T,t;
	int min,max,mid,A;
	for(i=0;i<5;i++)
	{  
	   printf("请输入数组a的5个元素：");
	   scanf("%d",&a[i]);
	}
	for(j=0;j<4;j++)
	{    
		for(i=(j+1);i<5;i++)
		{
		    if(a[j]<a[i])
		    {     T=a[j];
			      a[j]=a[i];
				  a[i]=T;
		    
		    }
	    
		}
	}
	for(i=0;i<5;i++)
	{
	   printf("%d\t",a[i]);
	}
	printf("\n");
	max=0;
	min=4;
	A=1;
	mid=(max+min)/2;
	for(i=0;i<(5/2);i++)
	{
		if(A==a[mid])
			break;
		else
		      if(A>a[mid])		
			      a[min]=a[mid]+1;
		      else
			      a[max]=a[mid]-1;


	}
	if(min>max)
		printf("该数据不在该数组中，没有找到。");
	else
		printf("查找成功，该元素在数组中的下标为：%d",mid);
	system("pause");
	return 0;


}