

 
 #include<stdio.h>
  
  int SumEven(int);                              //function declaration

  int main()
   {
	 int iValue=0,iRet=0;
	 
	 printf("Enter number\n");
	 scanf("%d",&iValue);
	 
	 iRet=SumEven(iValue);                       //function call
	 printf("Sum of even digits is:%d\n",iRet);
	 
	 return 0;
   }  
   
   int SumEven(int iNo)                         // function Defination
   { 
	int iDigit=0,iSum=0;  
    
	 if(iNo<0)
	 {
		 iNo = -iNo;
	 }
     while(iNo>0)
      {   
        iDigit=iNo%10;               
        if((iDigit%2)==0)
		{
		   iSum=iSum+iDigit;	
		}			
        iNo=iNo/10;  	
      }
   return iSum;
   }