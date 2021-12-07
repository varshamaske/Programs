
 #include<stdio.h>
 #include<conio.h>
 
 int Addition(int);   //Declaration
 
 int main()
 {
	 int iNo=0,iRet=0;
	 
	 printf("enter the number\n");
	 scanf("%d",&iNo);
	 
	 iRet=Addition(iNo);	 //Function call
	 
	 printf("Addition is :%d",iRet);
	 
	 getch();	 
     return 0;		 
 }
 
 int Addition(int iValue)   //Defination
 {
	int iSum=0;
	int iCnt=0;
	//     1         2           3
	for(iCnt=1; iCnt<=iValue; iCnt++)
	{
	  iSum=iSum+iCnt;    //4
	}
   return iSum;
 }