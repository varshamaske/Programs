//////////////////////////////////////////////////////
//
//accept 2 numbers from user and perform the addition
//
///////////////////////////////////////////////////////

#include"Header.h"                     //user defined header file inclusion        


//entry point function
int main()
 {
  int ivalue1=0,ivalue2=0,iret=0;       //local variables
  
  printf("enter first number\n");
  scanf("%d",&ivalue1);                 //accepting the input
 
  printf("enetr second number\n");
  scanf("%d",&ivalue2);                 //accepting the input
  
  iret=addition(ivalue1,ivalue2);       //function call
  
  printf("addition is:%d\n",iret);
  getch();
  
  return 0;                             //return success to os 
 }