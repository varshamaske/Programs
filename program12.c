
 #include<stdio.h>
 #include<conio.h>
 
 void Display(int);   //Declaration
 
 int main()
 {
	 
	 int iNo;
	 
	 printf("enter a number\n");
	 scanf("%d",&iNo);
	 
	 Display(iNo);   //Function call
	 
	 getch();	 
     return 0;		 
 }
 
 void Display(int iValue)   //Defination
 {
    int i=0;
	
	for(i=1; i<=iValue; i++)
	{
	  printf("Marvellous\n");
	}
 }