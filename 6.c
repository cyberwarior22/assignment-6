#include<stdio.h>
int main () { 
int n , factorial = 1 , i;
printf("Enter a number for factorial : ") ;
scanf("%d" , &n) ;
i = n ;
while (n>=1)
{
    factorial = factorial * n ;
    n-- ;
}
printf(" %d "  , factorial) ;
return 0 ; 
}
