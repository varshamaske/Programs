
 #include<stdio.h>
 #include<conio.h>
 
 int Display(int);   //Declaration
 
 int main()
 {
	 
	 int iNo;
	 
	 printf("enter a number\n");
	 scanf("%d",&iNo);
	 
	 Display(iNo);   //Function call
	 
	 getch();	 
     return 0;		 
 }
 
 int Display(int iValue)   //Defination
 {
    int i=0;
	
	for(i=1; i<=iValue; i++)
	{
	  printf("%d\n",i);
	}
 }