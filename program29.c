

 
 #include<stdio.h>
  
  int Display(int);                              //function declaration

  int main()
   {
	 int iValue=0,iRet=0;
	 
	 printf("Enter number\n");
	 scanf("%d",&iValue);
	 
	 iRet=Display(iValue);                       //function call
	 printf("Addition of digits is:%d\n",iRet);
	 
	 return 0;
   }  
   
   int Display(int iNo)                         // function Defination
   { 
	int iDigit=0,iSum=0;  
     
	 if(iNo<=0)
	 {
		iNo=iNo;
	 }	 
     while(iNo>0)
      {   
        iDigit=iNo%10;               
        iSum=iSum+iDigit;    
        iNo=iNo/10;  	
      }
   return iSum;
   }