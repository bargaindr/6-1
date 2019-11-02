#include <stdio.h>
  

int main(){
     
	printf("请输入两位同学的成绩,空格隔开\n\n");                            
	
	 int tongxue=0;                                               

	 int tongxuetwo=0;                                          
     
	 int pingjun=0;                                             
     scanf("%d%d",&tongxue,&tongxuetwo);                                        
	  printf("\n");                                            
	 printf("您输入第一位同学的成绩是%d,第二位同学的成绩是%d，\n\n",tongxue,tongxuetwo);                
	
	                                          
	  pingjun=(tongxue+tongxuetwo)/2;                                   
	
	 
	 printf("两位同学的平均分是%d\n\n\n",pingjun);      




   



	return 0;




}