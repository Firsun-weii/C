#include<stdio.h>
#include<stdlib.h>

int main()
{
   int a[5],i,j,b,c,T,N;
   for(i=0;i<5;i++)
   {
       printf("����������a��5��Ԫ�أ�");
	   scanf("%d",&a[i]);
   
   
   
   }
   for(j=0;j<5;j++)
   {
       printf("%d\t",a[j]);
   
   
   
   }
   printf("\n");
   T=a[0];
   N=a[0];

   for(b=1;b<5;b++)
   {     
	   if(T<a[b])
		   T=a[b];
      
   
   
   }
   printf("�������ֵΪ:%d",T);
   printf("\n");
   for(b=1;b<5;b++)
   {
      if(N>a[b])
		  N=a[b];
   
   
   }
   printf("�������СֵΪ��%d",N);

   system("pause");
   return 0;


}