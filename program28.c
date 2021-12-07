
 //
 
 #include<stdio.h>
  
  void Display(int);        //function declaration

  int main()
   {
	 int iValue=0;
	 
	 printf("Enter number");
	 scanf("%d",&iValue);
	 
	 Display(iValue);        //function call
	  
	 return 0;
   }  
   
   void Display(int iNo)        // function Defination
   { 
	int iDigit=0;   
   
     while(iNo>0)
      {   
        iDigit=iNo%10;               
        printf("%d\n",iDigit);       
        iNo=iNo/10;                  
      }
   
   }