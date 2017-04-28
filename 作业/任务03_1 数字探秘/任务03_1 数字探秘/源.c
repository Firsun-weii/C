//任务03_1 数字探秘  2017-04-18截止
//认真阅读下面要求，完成本次任务代码的编写。
//
//
//
//问题描述：
//
//求一个字符的二进制位中包含多少个1。
//
//程序输入：
//
//    输入一个字符作为字符型进行读取。
//
//程序输出：
//
//    求所输入字符的二进制位中包含多少个1.例如字符'A'的ASCII码为65，其二进制为0100 0001，所以最终输出2。
//
//输入示例：
//
//    A
//
//输出示例：
//
//    2


//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{	      char x;
//          printf("请输入一个字符：");
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
//	printf("请输入一个字符");
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
//if(str[i]=='1' || str[i]=='0') //判断第i个字符是否是'1'或'0'，如果是执行下面语句
//{
//n<<=1; //把已经得到的n值左移1位，等同于乘以2
//n+=str[i]-'0'; //字符'1'减去'0'就等于1，字符'0'减去'0'当然是0，所以这句的意思是把第i个字符所对应的数加到n上去
//}
//else
//{
//printf("不是二进制数\n");
//return 1;
//}
//}
//printf("%d\n",n);
//}


/**
*任务03_1 数字探秘
*姓名：魏谦强
*学号：2016011640
班级：7班
*日期：2017/4/15
*/


#include<stdio.h>
#include<stdlib.h>


//int main(void)
//{
//     int i,num;
//	 char ch;
//	 printf("请输入一个字符：");
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
//	  printf("请输入一个字符：");
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
//	  printf("请输入一个字符：");
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
	printf("请输入一个字符：");
	scanf("%c",ch);

   for(int i=0;i<8;i++)
   {
          if(((ch>>i)&0x01) == 0x01)//ch>>1不是复制运算
          num++;
   }