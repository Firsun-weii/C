#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a[5],i,j,b,c,T,N,t,n,n1,t1;
   for(i=0;i<5;i++)
   {
       printf("请输入数组a的5个元素：");
	   scanf("%d",&a[i]);
   
   
   
   }
   for(j=0;j<5;j++)
   {
       printf("%d\t",a[j]);
   
   
   
   }
   printf("\n");
   t1=a[0];
   N=a[0];
   for(T=0;T<4;T++)
   {
        for(b=(T+1);b<5;b++)
        {     
	           if(a[T]<a[b])
			   {
				    t=a[T];
		            a[T]=a[b];
					a[b]=t;
      
			   }
   
        }
   }
   printf("\n");
   for(j=0;j<5;j++)
   {
       printf("%d\t",a[j]);
   
   
   
   }
   /*printf("\n");*/
   for(T=0;T<4;T++)
   {
        for(b=(T+1);b<5;b++)
        {     
	           if(a[T]>a[b])
			   {
				    t=a[T];
		            a[T]=a[b];
					a[b]=t;
      
			   }
   
        }
   }
   for(j=0;j<5;j++)
   {
       printf("%d\t",a[j]);
   }
   printf("\n");
   for(b=1;b<5;b++)
   {
      if(t1<a[b])
		  t1=a[b];
   
   
   }
   printf("数组的最大值为：%d",t1);
   printf("\n");
   for(b=1;b<5;b++)
   {
      if(N>a[b])
		  N=a[b];
   
   
   }
   printf("数组的最小值为：%d",N);

   system("pause");
   return 0;


}