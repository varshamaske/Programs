
 #include<stdio.h>
 #include<conio.h>
 
 
 void Display()
 {
    int i=0;
	
	for(i=1; i<=5; i++)
	{
	  printf("%d\n",i);
	}
 }
 int main()
 {
	 Display();   //Function call
	 getch();	 
     return 0;		 
 }