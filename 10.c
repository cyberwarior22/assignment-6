#include<stdio.h>
int main () { 
int  n , y ;
printf("Enter a number : ") ;
scanf("%d" , &n) ;
printf("The reversed number is : ") ;


while (n>0)
{
    y = n % 10 ;
    n = n/10 ;
    printf("%d" , y) ;
}
return 0 ; 
}
