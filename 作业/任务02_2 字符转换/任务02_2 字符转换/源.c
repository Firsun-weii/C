/**
*说明：任务02_2 字符转换 
*姓名：魏谦强
*学号：2016011640
*班级：7班
*日期：2017/3/17
*/




#include<stdio.h>
#include<stdlib.h>



int main()
{
 char a,b,c;
 printf("请输入字符：\n");
 scanf("%c %c %c",&a,&b,&c);
 printf("%c的ASCII码值为：%d,对应大写字母为：%c\n",a,a,a-32);
 printf("%c的ASCII码值为：%d,对应大写字母为：%c\n",b,b,b-32);
 printf("%c的ASCII码值为：%d,对应大写字母为：%c\n",c,c,c-32);
  system("pause");
  return 0;
}