
 #include<stdio.h>
 #include<conio.h>
 
 int Factorial(int);   //Declaration
 
 int main()
 {
	 int iNo=0,iRet=0;
	 
	 printf("enter the number\n");
	 scanf("%d",&iNo);
	 
	 iRet=Factorial(iNo);	 //Function call
	 
	 printf("Factorial is :%d",iRet);
	 
	 getch();	 
     return 0;		 
 }
 
 int Factorial(int iValue)   //Defination
 {
	int iFact=1;
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