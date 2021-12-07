///////////////////////////////////////////////////////////
//
// function name:    addition
// input:            integer,integer
// output:           integer
// description:      it used to add 2 numbers
// author:           varsha vishwas maske
// date:             31/08/2021
//
//////////////////////////////////////////////////////////
 /*
  algorithm
  START
	   accept first number as NO1
	   Accept second number as NO2
	   perform addition of NO1 & NO2
	   Store the result in RET
	   Return the value of RET
  STOP
 */
 
 #include"header.h"
 int addition(
              int ino1,       //first input argument
              int ino2        //second input argument
			 )
 {
 int iResult=0;               //local variable to store result
 
 iResult = ino1+ino2;
 
 return iResult;              //return the value to the caller
 
 }
