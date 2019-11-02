#include <stdio.h>
  

int main(){
     
	printf("请输入四位同学的成绩，以空格隔开\n\n");                            
	
	 double tongxueone=0;                                               
     double tongxuetwo=0; 
	 double tongxuethree=0; 
	 double tongxuefour=0; 
     double pingjun=0;
	                                              
     scanf("%f%f%f%f",ctongxueone,&tongxuetwo,&tongxuethree,&tongxuefour);                                        
	  printf("\n");                                            
	 printf("您输入四位同学成绩分别是%f%f%f%f,\n\n",tongxueone,tongxuetwo,tongxuethree,tongxuefour); 
	 
	 pingjun=(tongxueone+tongxuetwo+tongxuethree+tongxuefour)/4;
	
	                                          
	                                   
	
	 
	 printf("平均分是%0.3f\n\n\n",pingjun);      




   



	return 0;




}