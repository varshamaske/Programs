
 // write a program to accept number from user and whether check it is Perfect
 // or not.
 
 #include<stdio.h>

  int Power(int,int);

 int main()
  {
    int iValue1 = 0,iValue2 = 0, iRet = 0;
   
    printf("Enter first number\n");
    scanf("%d",&iValue1);

    
    printf("Enter second number\n");
    scanf("%d",&iValue2);
	
    iRet = Power(iValue1,iValue2);
    printf("%d\n",iRet);
   
	return 0;
  }
   int Power(int iNo1, int iNo2)
   {
	int iMul = 1, iCnt = 0;
	
	for(iCnt=1; iCnt<=iNo2; iCnt++)
	{
	 iMul = iMul*iNo1;
	}
	 return iMul;	
   }   
	
 