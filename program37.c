

 
 #include<stdio.h>
  
  int Reverse(int);                              //function declaration

  int main()
   {
	 int iValue=0,iRet=0;
	 
	 printf("Enter number\n");
	 scanf("%d",&iValue);
	 
	 iRet=Reverse(iValue);                       //function call
	 printf("Reverse number is:%d\n",iRet);
	 
	 return 0;
   }  
   
   int Reverse(int iNo)                         // function Defination
   { 
	int iDigit=0,iRev=0;  
    
     while(iNo!=0)
      {   
        iDigit=iNo%10; 		
        iRev=(iRev*10)+iDigit;		
        iNo=iNo/10;  	
      }
   return iRev;
   }