/* 
   Names of Contributing Members:
      

   Section: 
*/

/* Instruction:
   1.  Complete the requirements based on the 
	   comments.
   2. You are allowed to create additional functions
      to support your answer, but these should be
	  called from the required functions below. 
   3. in.txt contains sample inputs for the program,
      while expected.txt contains the expected result 
	  of your program. Please mind the spacing to 
	  facilitate blackbox testing.  It is suggested
	  that you practice using input and output redirection
	  to help you in debugging.  For example, if your 
	  executable file is exer.exe, for input and output
	  redirection, type:
	     exer < in.txt > actual.txt
	  Then, compare your actual.txt with the provided
	  expected.txt to see if the contents are exactly the same.
   4. It is expected that your code will compile and run.
      A non-compiling program will result to a grade of 0 
	  for this activity. This is so that you hone the habit 
      of completing one function/feature/requirement, making 
	  sure it compiles and executes properly prior to proceeding 
      to the next requirement; to prepare you for the hands-on
	  exams and mp expectations too of having a compiling program.
*/

#include <stdio.h>

#define MAX 20

/* This function returns 1 if the value is a valid 
   grade point equivalent.  The possible grade point
   equivalents are 0.0, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 
   and 4.0 only. If invalid, the function returns 0.
   
   @param value - the grade to be checked
   @return 1 if value is a valid grade, otherwise 0
*/
int
isValidGrade(float value)
{
}

/* This function gets input from the user as long
   as the user's input is not negative.  Getting of
   input should also stop when the maximum capacity
   of the array is reached. Assume the user will input
   at most 1 decimal place for each input.
   
   If the input is not negative, the function isValidGrade()
   is called to check if the input is a valid grade
   point equivalent.  If yes, this is stored into the array,
   if not, the value should NOT be stored in the array.
   
   @param aGrades - the array where the user input 
                is to be stored
   @return the number of non-negative inputs stored 
                in aGrades
				
   Requirements: 1. You are NOT allowed to have any 
                    printf() statements in this function.
				 2. You are required to call isValidGrade()
				    as part of the solution.
*/
int
getInputs(float aGrades[])
{
}

/* This function displays the first n entries
 from array aGrades. The display is supposed to show
 exactly 1 decimal place and the values are separated by
 1 space. The last entry also has 1 space after it.
 
 @param aGrades - the array of floating point values
 @param n - the number of elements that will be displayed
*/
void 
displayAll(float aGrades[], int n)
{
}

/* This function returns the number of elements in
   aGrades that contain 4.0.
  
   @param aGrades - the starting address of the array
                    whose elements are being checked
   @param n - the number of elements to be checked
   @return the count of number of elements that contain 4.0
   
   Requirement: 1. You are required to use array indexing 
                   notation for this function.
				2. You are NOT allowed to have any printf() 
				   statement in this function.
*/
int
count4(float aGrades[], int n)
{
}

/* This function returns the number of elements in
   aGrades that contain 0.0.
  
   @param aGrades - the starting address of the array
                    whose elements are being checked
   @param n - the number of elements to be checked
   @return the count of number of elements that contain 0.0
   
   Requirement: 1. You are required to use pointer 
                   dereferencing notation for this function.
				2. You are NOT allowed to have any printf() 
				   statement in this function.
*/
int
countFail(float * aGrades, int n)
{
}

/* This function returns the number of elements in
   aGrades that contain passing values (i.e., not 0.0)
  
   @param aGrades - the starting address of the array
                    whose elements are being checked
   @param n - the number of elements to be checked
   @return the count of number of elements that contain
            passing grades
   
   Requirements: 1. You are required to use pointer 
                    dereferencing notation for this function.
				 2. You are required to call function countFail()
				    as part of the solution.
				 3. You are NOT allowed to have any printf() 
				   statement in this function.
*/
int
countPass(float * aGrades, int n)
{
}

int
main()
{
   float aGrades[MAX];
   int nElem = 0;
   int res;    //you can use this variable to store result of function call if you wish
   
   nElem = getInputs(aGrades);
   displayAll(aGrades, nElem);
   
   /* Provide the appropriate function calls 
      based on the given printf() below: */
   printf("Number of 4.0: ");
   
   printf("Number of Failing: ");
   
   printf("Percentage of Failing: ");
   
   printf("Number of Passing: ");

   printf("Percentage of Passing: ");

   return 0;	  
}
