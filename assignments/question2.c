#include <stdio.h>

int main(void)
{
int integer1; /* first number to be input by user  */
int integer2;/* second number to be input by user */
int x;      /* variable in which sum will be stored */ 
int sum;

printf( "Enter first integer\n" ); /* prompt */
scanf( "%d", &integer1 );        /* read an integer */

printf( "Enter second integer\n" ); /* prompt */
scanf( "%d", &integer2 );           /* read an integer */

sum = integer1 + integer2; /* assign total to sum */

printf( "Sum is %d\n", sum ); /* print sum */

    return 0;
    
}