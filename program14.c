
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
    int i=5;
	
	if(iValue==0)
	{
	  printf("your entered number is 0\n");
	}
	
	if(iValue<0)            //Input updator
	{
	  iValue= -iValue;
	}
	
	for(i=1; i<=iValue; i++)
	{
	  printf("%d\n",i);
	}
 }