/**
*说明：任务02_3 求圆柱体面积与体积
*姓名：魏谦强
*学号：2016011640
*班级：7班
*日期：2017/3/17
*/



#include<stdio.h>
#include<stdlib.h>


int main()
{
	float a,r,h,s,v;
	a=3.14;
	printf("请输入圆柱底面半径为：");
	scanf("%f",&r);
	printf("请输入圆柱体高度为：");
	scanf("%f",&h);
	s=2*a*r*r+2*a*r*h;
	v=a*r*r*h;
	printf("圆柱体表面积为：%.2f,圆柱体体积为：%.2f",s,v);
	 system("pause");

	return 0;
	
	
    

	



	 system("pause");
	return 0;
}