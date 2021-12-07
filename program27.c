
 //
 
 #include<stdio.h>
  
  void Display();        //function declaration

  int main()
   {
	  Display();        //function call
	  
	  
	  return 0;
   }  
   
  void Display()        // function Defination
  {
	int iNo=7521; 
	int iDigit=0;   
   
   while(iNo>0)
    {   
      iDigit=iNo%10;               
      printf("%d\n",iDigit);       
      iNo=iNo/10;                  
    }
  }