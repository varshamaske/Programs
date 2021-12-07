
#include<stdio.h> 
#include<conio.h>

 void Display(int ino) 
  { 
    int i = 0; 
    for(i = 0; i<=5 ;i++)
     { 
       printf("marvellous\n");
     } 
  } 
  
   int main() 
   { 
     int ivalue=0;
	 printf("enter a number\n");
	 scanf("%d",&ivalue);
     Display(ivalue);
     getch();	 
     return 0; 
   } 