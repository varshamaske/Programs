
 // write a program to accept number from user and whether check it is Perfect
 // or not.
 
 #include<stdio.h>
 #include<stdbool.h>

 int SumFactors(int);
 bool CheckPerfect(int);

 int main()
 {
    int iValue = 0;
    bool bRet = false;
    
	printf("Enter number\n");
    scanf("%d",&iValue);
    
	bRet = CheckPerfect(iValue);
    
	if(bRet == true)
     {
	   printf("Number is Perfect\n");
	 }
    else
     {
	   printf("Number is not Perfect\n");
	 }
    return 0;
 }
 
 bool CheckPerfect(int iNo)
 {  
    int iSum = 0 , iCnt = 0;
	
    if(iNo< 0)
	{
		iNo = -iNo;
	}
	for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
       if((iNo % iCnt) == 0)
	   {
		   iSum = iSum + iCnt;
	   }
    }
    
	if(iSum == iNo)
     {
	   return true;
	 }
    else
     {
	   return false;
	 }
 }
 
    
	
 