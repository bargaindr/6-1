#include <stdio.h>
  

int main(){
     
	printf("请输入正方形边长\n\n");                            //提示用户输入数据
	
	 int bian=0;                                               //定义边长变量初始化

	 int zhouchang=0;                                          //定义周长变量初始化
     
	 int mianji=0;                                             //定义面积变量初始化
     scanf("%d",&bian);                                        //用户输入边长
	  printf("\n");                                            //输出一个空格
	 printf("您输入的正方形边长是%d\n\n",bian);                //输出用户输入的数据
	
	 zhouchang=bian*4;                                         //计算周长
	 mianji=bian*bian;                                         //计算面积
	
	 
	 printf("周长是%d，面积是%d\n\n\n",zhouchang,mianji);      //输出结果




   



	return 0;




}