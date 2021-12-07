//accept number from user and display that number of * on screen
//input :4 
//output : * * * *

//input : 2
//output : * *

#include<stdio.h>
#include<conio.h>

 void display(int ino)
   {
     int icnt=0;
     for(icnt=0; icnt<ino; icnt++)
     {
         printf("*\t");
     }
    
   }

 int main()
  {
    int ivalue=0;
    printf("enter the number \n");
    scanf("%d",&ivalue);
    display(ivalue);
    getch();
    return 0;

  }