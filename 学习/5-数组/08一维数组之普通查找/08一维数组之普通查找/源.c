#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a[5]={0,0,0,0,0};
	int i,j,t;
	int num=0;
	for(i=0;i<5;i++)
	{
	    printf("����������a��5��Ԫ�أ�");
		scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
	   printf("%d\t",a[i]);
	
	
	}
	printf("\n");
	printf("������Ҫ���ҵ���ֵ��");
	scanf("%d",&t);
	for(j=0;j<5;j++)
	{
	    if(t==a[j])
			break;
		else
            num++;
	}
	if(num==5)
		printf("û�в��ҵ���Ԫ�أ�");
	else
		printf("���ҳɹ�����Ԫ�ض�Ӧ�������±�Ϊ%d",j);
	system("pause");
	return 0;


}