
 #include<stdio.h>
 #include<conio.h>
 
 int unsigned long Factorial(int);   //Declaration
 
 int main()
 {
	 int iNo=0;
	 unsigned long int iRet=0;
	 
	 printf("enter the number\n");
	 scanf("%d",&iNo);
	 
	 iRet=Factorial(iNo);	 //Function call
	 
	 printf("Factorial is :%ld",iRet);
	 
	 getch();	 
     return 0;		 
 }
 
 unsigned long int Factorial(int iValue)   //Defination
 {
	unsigned long int iFact=1;
	int iCnt=0;
	
	if(iValue<0)           //Updator
	{
	  iValue= -iValue;
	}	
	
	//     1         2           3
	for(iCnt=1; iCnt<=iValue; iCnt++)
	{
	  iFact=iFact*iCnt;    //4
	}
   return iFact;
 }