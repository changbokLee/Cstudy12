/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <limits.h>

int main(void)
{
   int a[10] = { 6,5, 4, 3, 9, 8, 0, 1, 2, 7 };
   int i , maxValue = INT_MIN;
   for(int i = 0; i <10; i++){
       if (maxValue <a[i]) maxValue = a[i];
   }
 printf("%d\n", maxValue);
  
  int c = 5; 
  int *d = &c;
  printf("%d\n" , *d);
  
  char a= get char
 
  
  return 0 ;
}
