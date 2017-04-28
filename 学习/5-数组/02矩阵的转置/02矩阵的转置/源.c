#include<stdio.h>
#include<stdlib.h>

int main()

{
	int a[2][3]={1,2,3,4,5,6};
	int b[3][2]={0,0,0,0,0,0};
	int i1,i2,j1,j2,i3,j3,i4,j4;
	printf("请输入2行3列的数组a的6个元素为：");
	for(i1=1;i1<2;i1++)
	{
	    for(j1=0;j1<3;j1++)
		{	scanf("%d",a[i1][j1]);
		    printf("下一个：");
	
		}
	}
	printf("请输入3行2列的数组b的6个元素为：");
	for(i1=1;i1<3;i1++)
	{
	    for(j1=0;j1<2;j1++)
		{	scanf("%d",a[i1][j1]);
	        printf("下一个：");
		}
	}

	for(i1=0;i1<2;i1++)
	{
	      for(j1=0;j1<3;j1++)
			  printf("%d\t",a[i1][j1]);
		  printf("\n");
	
	}
	for(i1=0;i1<3;i1++)
	{
	      for(j1=0;j1<2;j1++)
			  printf("%d\t",a[j1][i1]);
		  printf("\n");
	
	}
	for(i1=0;i1<3;i1++)
	{
	      for(j1=0;j1<2;j1++)
		  {  
			  b[i1][j1]=a[j1][i1];
			  /*b[0][0]=a[0][0];
			  b[0][1]=a[1][0];
			  b[1][0]=a[0][1];
			  b[1][1]=a[1][1];
			  b[2][0]=a[0][2];
			  b[2][1]=a[1][2];*/
			  printf("%d\t",b[i1][j1]);
		  }
		  printf("\n");
	
	}
	system("pause");
	return 0;


}