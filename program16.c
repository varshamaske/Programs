
 #include<stdio.h>
 #include<conio.h>
 
 void Display(int);   //Declaration
 
 int main()
 {
	 int iNo=0;
	 
	 printf("enter the number\n");
	 scanf("%d",&iNo);
	 
	 Display(iNo);   //Function call
	 
	 getch();	 
     return 0;		 
 }
 
 void Display(int iValue)   //Defination
 {
	int i=0;
	//    1        2      3
	for(i=iValue; i>=1; i--)
	{
	  printf("%d\n",i);  //4
	}
 }