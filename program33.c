

 
 #include<stdio.h>
  
  int CountDigit(int);                              //function declaration

  int main()
   {
	 int iValue=0,iRet=0;
	 
	 printf("Enter number\n");
	 scanf("%d",&iValue);
	 
	 iRet=CountDigit(iValue);                       //function call
	 printf("count of digits is:%d\n",iRet);
	 
	 return 0;
   }  
   
   int CountDigit(int iNo)                         // function Defination
   { 
	int iDigit=0,iCnt=0;  
     
	 if(iNo == 0)
	 {
		return 1;
	 }
	 if(iNo<0)
	 {
		 iNo = -iNo;
	 }
     while(iNo>0)
      {   
        iDigit=iNo%10;               

		iCnt++;	
					
        iNo=iNo/10;  	
      }
   return iCnt;
   }