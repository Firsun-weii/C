//����03_1 ����̽��  2017-04-18��ֹ
//�����Ķ�����Ҫ����ɱ����������ı�д��
//
//
//
//����������
//
//��һ���ַ��Ķ�����λ�а������ٸ�1��
//
//�������룺
//
//    ����һ���ַ���Ϊ�ַ��ͽ��ж�ȡ��
//
//���������
//
//    ���������ַ��Ķ�����λ�а������ٸ�1.�����ַ�'A'��ASCII��Ϊ65���������Ϊ0100 0001�������������2��
//
//����ʾ����
//
//    A
//
//���ʾ����
//
//    2


//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{	      char x;
//          printf("������һ���ַ���");
//	      scanf("%c",&x);
//	      printf("%d",x);
//	      system("pause");
//	      return 0;
//
//}


//#include <cstdio>
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    char s[2], ch;
//    scanf("%s",s);
//    ch = s[0];
//    int count=0;
//    while(ch>0)
//    {
//        if(ch&1)
//            count++;
//        ch>>1;
//    }
//    printf("%d\n", count);
//	 system("pause");
//    return 0;
//}




//#include<cstdio>
//
//int main()
//
//{      
//    char s[2],ch;
//	int count=0;
//	printf("������һ���ַ�");
//	ch=s[0];
//	while(ch>0)
//	{
//		if(ch&1)
//			count++;
//		else
//		    ch=ch>>1;
//	}
//	printf("%d\n",count);
//    
//	return 0;
//
//
//
//
//}




//#include <stdio.h>
//int main()
//{
//char str[100];
//int i,n=0;
//scanf("%s",str);
//for(i=0;str[i]!='\0';i++)
//{
//if(str[i]=='1' || str[i]=='0') //�жϵ�i���ַ��Ƿ���'1'��'0'�������ִ���������
//{
//n<<=1; //���Ѿ��õ���nֵ����1λ����ͬ�ڳ���2
//n+=str[i]-'0'; //�ַ�'1'��ȥ'0'�͵���1���ַ�'0'��ȥ'0'��Ȼ��0������������˼�ǰѵ�i���ַ�����Ӧ�����ӵ�n��ȥ
//}
//else
//{
//printf("���Ƕ�������\n");
//return 1;
//}
//}
//printf("%d\n",n);
//}


/**
*����03_1 ����̽��
*������κǫǿ
*ѧ�ţ�2016011640
�༶��7��
*���ڣ�2017/4/15
*/


#include<stdio.h>
#include<stdlib.h>


//int main(void)
//{
//     int i,num;
//	 char ch;
//	 printf("������һ���ַ���");
//	 scanf("%c",&ch);
//	 for (i=0,num=0;i<=10;i++)
//	 {
//	       int n=(ch>>i)%2;
//		   if(n)
//			   num++;
//	 
//	 
//	 
//	 }
//	 printf("%d\n",num);
//	  system("pause");
//	return 0;
//
//
//
//}


//int main()
//
//{    
//      int i;
//	  int num=0;
//	  char ch,ch1;
//	  printf("������һ���ַ���");
//	  scanf("%c",&ch);
//	  ch1=ch;
//	  if(ch&1==1)
//		  num++;
//	  for(i=1;i<8;i++)
//	  {  
//		 ch1=ch1>>1;
//	     if((ch1&1)== 1)
//			 num++;
//		/*printf("%d\n",num);*/	 
//	  }
//	  printf("%d",num);
//	   system("pause");
//	  return 0;
//
//
//
//
//}


//{
//      int i=1;
//	  int num=0;
//	  char ch,ch1;
//	  printf("������һ���ַ���");
//	  scanf("%c",&ch);
//	  do
//	  {
//	      
//	  
//	  
//	  
//	  }
//}


//int main()
//{
//    char s[2], ch;
//    scanf("%s", s);
//    ch = s[0];
//    int count = 0;
//    while(ch>0)
//    {
//        if(ch&1)
//            count++;
//        ch>>=1;
//    }
//    printf("%d\n", count);
//    return 0;
//}
int main()
{   
	
	int num=1;
	char ch;
	printf("������һ���ַ���");
	scanf("%c",ch);

   for(int i=0;i<8;i++)
   {
          if(((ch>>i)&0x01) == 0x01)//ch>>1���Ǹ�������
          num++;
   }