#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5]={0,0,0,0,0};
	int i,j,t;
	int num=0;
	for(i=0;i<5;i++)
	{
	    printf("请输入数组a的5个元素；");
		scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
	   printf("%d\t",a[i]);
	
	
	}
	printf("\n");
	printf("请输入要查找的数值：");
	scanf("%d",&t);
	for(j=0;j<5;j++)
	{
	    if(t==a[j])
			break;
		else
            num++;
	}
	if(num==5)
		printf("没有查找到该元素：");
	else
		printf("查找成功；该元素对应的数组下标为%d",j);
	system("pause");
	return 0;


}